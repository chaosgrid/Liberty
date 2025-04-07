#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4172a0);
CLANG_FORWARD_PROC_SYMBOL(public_4177d0);
CLANG_FORWARD_PROC_SYMBOL(public_417870);
CLANG_FORWARD_PROC_SYMBOL(public_417cd0);
CLANG_FORWARD_PROC_SYMBOL(public_417d00);
CLANG_FORWARD_PROC_SYMBOL(public_417d80);
CLANG_FORWARD_PROC_SYMBOL(public_418978);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_4172b6 _public_4172b6
#define public_4172bd _public_4172bd
#define public_4172ee _public_4172ee
#define public_4172f3 _public_4172f3
#define public_4172fb _public_4172fb
#define public_417300 _public_417300
#define public_41730c _public_41730c
#define public_417330 _public_417330
#define public_417344 _public_417344
#define public_4173c5 _public_4173c5
#define public_417402 _public_417402
#define public_41740f _public_41740f

PROC_DECLARE(0x4172a0, internal_4172a0, public_4172a0);
extern "C" NAKED register_t __cdecl internal_4172a0()
{
    __asm
    {
        mov edx, dword ptr ds : [public_429dd0]
        mov eax, dword ptr ds : [public_429dd4]
        sub esp, 8
        test edx, edx
        jne public_4172b6
        xor ecx, ecx
        jmp public_4172bd
        public_4172b6 : nop
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        public_4172bd : nop
        shl ecx, 0x10
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [public_429dd8]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, 1
        mov dword ptr ss : [esp+0xC], edi
        mov esi, eax
        jae public_4173c5
        test edx, edx
        je public_4172ee
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, 1
        ja public_4172f3
        public_4172ee : nop
        mov ecx, 1
        public_4172f3 : nop
        test edx, edx
        jne public_4172fb
        xor eax, eax
        jmp public_417300
        public_4172fb : nop
        sub eax, edx
        sar eax, 2
        public_417300 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        jge public_41730c
        xor eax, eax
        public_41730c : nop
        push ebx
        lea edx, ds:[eax*4]
        push ebp
        push edx
        call public_418a9e
        mov ebx, dword ptr ds : [public_429dd0]
        add esp, 4
        cmp ebx, esi
        mov ebp, eax
        mov edi, ebp
        je public_417344
        lea esp, ss:[esp]
        public_417330 : nop
        push ebx
        push edi
        call public_417d80
        add ebx, 4
        add esp, 8
        add edi, 4
        cmp ebx, esi
        jne public_417330
        public_417344 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push 1
        push edi
        mov ecx, offset public_429dcc
        call public_417d00
        mov ecx, dword ptr ds : [public_429dd4]
        add edi, 4
        push edi
        push ecx
        push esi
        mov ecx, offset public_429dcc
        call public_417cd0
        mov edx, dword ptr ds : [public_429dd4]
        mov eax, dword ptr ds : [public_429dd0]
        push edx
        push eax
        mov ecx, offset public_429dcc
        call public_417870
        mov ecx, dword ptr ds : [public_429dd0]
        push ecx
        call public_418978
        mov edx, dword ptr ss : [esp+0x14]
        lea eax, ss:[ebp+edx*4]
        add esp, 4
        mov ecx, offset public_429dcc
        mov dword ptr ds : [public_429dd8], eax
        call public_4177d0
        lea ecx, ss:[ebp+eax*4+4]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_429dd0], ebp
        pop ebp
        pop ebx
        pop edi
        mov dword ptr ds : [public_429dd4], ecx
        pop esi
        add esp, 8
        ret 
        public_4173c5 : nop
        lea edx, ds:[eax+4]
        push edx
        push eax
        push eax
        mov ecx, offset public_429dcc
        call public_417cd0
        lea eax, ss:[esp+0x14]
        push eax
        mov eax, dword ptr ds : [public_429dd4]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 2
        mov edx, 1
        sub edx, ecx
        push edx
        push eax
        mov ecx, offset public_429dcc
        call public_417d00
        mov eax, dword ptr ds : [public_429dd4]
        cmp esi, eax
        je public_41740f
        public_417402 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi], ecx
        add esi, 4
        cmp esi, eax
        jne public_417402
        public_41740f : nop
        add dword ptr ds : [public_429dd4], 4
        mov eax, edi
        pop edi
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4172a0)
    }
}

#undef public_4172b6
#undef public_4172bd
#undef public_4172ee
#undef public_4172f3
#undef public_4172fb
#undef public_417300
#undef public_41730c
#undef public_417330
#undef public_417344
#undef public_4173c5
#undef public_417402
#undef public_41740f
