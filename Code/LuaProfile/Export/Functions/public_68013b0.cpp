#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6801d10);
CLANG_FORWARD_PROC_SYMBOL(public_6801f70);
CLANG_FORWARD_PROC_SYMBOL(public_6802010);
CLANG_FORWARD_PROC_SYMBOL(public_6802140);
CLANG_FORWARD_PROC_SYMBOL(public_6802210);
CLANG_FORWARD_PROC_SYMBOL(public_6802420);
CLANG_FORWARD_PROC_SYMBOL(public_68026d0);
CLANG_FORWARD_PROC_SYMBOL(public_6802810);

#define public_680143b _public_680143b
#define public_68014ab _public_68014ab
#define public_680151f _public_680151f
#define public_680153d _public_680153d
#define public_6801546 _public_6801546
#define public_6801549 _public_6801549
#define public_680155e _public_680155e
#define public_6801587 _public_6801587
#define public_680158c _public_680158c
#define public_680158e _public_680158e
#define public_680159f _public_680159f

PROC_DECLARE(0x68013b0, internal_68013b0, public_68013b0);
extern "C" NAKED register_t __cdecl internal_68013b0()
{
    __asm
    {
        sub esp, 8
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        xor ebp, ebp
        xor eax, eax
        cmp edi, ebp
        je public_680159f
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        push ebx
        push esi
        push ecx
        call public_68026d0
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, 0xFFFFFFFF
        jne public_680143b
/*FIXUP push offset public_680d27c @0x68013e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d27c
        call public_6801f70
        add esp, 4
        test eax, eax
        je public_680158c
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], ebp
        fild qword ptr ss : [esp+0x10]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6802210
        mov eax, offset _public_6801d10
        add esp, 8
        test eax, eax
        jne public_680158c
        push 1
        call public_6801cf0
        push 2
        mov edi, eax
        call public_6801cf0
        mov esi, eax
        mov dword ptr ss : [esp+0x2C], esi
        jmp public_68014ab
        public_680143b : nop
        push eax
        call public_6802810
        mov edi, eax
        add esp, 4
        cmp edi, ebp
        je public_680158c
/*FIXUP push offset public_680d268 @0x680144e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d268
        call public_6801f70
        mov ebx, eax
        add esp, 4
        cmp ebx, ebp
        je public_680158c
        push edi
        call public_6802420
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ebp
        fild qword ptr ss : [esp+0x14]
        push ecx
        fstp qword ptr ss : [esp]
        call public_6802210
        push ebx
        call public_6801d10
        add esp, 0xC
        test eax, eax
        jne public_680158c
        push 1
        call public_6801cf0
        push 2
        mov edi, eax
        call public_6801cf0
        mov dword ptr ss : [esp+0x2C], eax
        mov esi, eax
        public_68014ab : nop
        add esp, 8
        cmp edi, ebp
        je public_680158c
        cmp esi, ebp
        je public_680158c
        push edi
        call public_6802010
        add esp, 4
        test eax, eax
        jne public_680158c
        push edi
        call public_6802140
        mov edx, eax
        add esp, 4
        cmp edx, ebp
        je public_680158c
        mov ebp, dword ptr ss : [esp+0x28]
        test ebp, ebp
        je public_680155e
        mov ebx, dword ptr ss : [esp+0x2C]
        test ebx, ebx
        je public_680155e
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        cmp esi, ebx
        jae public_680153d
        mov edi, dword ptr ds : [public_680c020]
        push esi
        push edx
        push ebp
        call edi
        lea eax, ds:[esi+1]
        add esp, 0xC
        cmp eax, ebx
        jae public_680151f
        mov byte ptr ds : [esi+ebp], 0x3D
        mov esi, eax
        public_680151f : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call public_6802140
        add esp, 4
        test eax, eax
        je public_6801549
        mov ecx, ebx
        sub ecx, esi
        push ecx
        push eax
        add esi, ebp
        push esi
        call edi
        jmp public_6801546
        public_680153d : nop
        push ebx
        push edx
        push ebp
        call dword ptr ds : [public_680c020]
        public_6801546 : nop
        add esp, 0xC
        public_6801549 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, ebp
        mov byte ptr ds : [ebx+ebp-1], 0
        repne scasb
        not ecx
        dec ecx
        mov esi, ecx
        jmp public_680158e
        public_680155e : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        dec ecx
        push esi
        mov ebx, ecx
        call public_6802140
        add esp, 4
        test eax, eax
        je public_6801587
        or ecx, 0xFFFFFFFF
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        add ebx, ecx
        public_6801587 : nop
        lea esi, ds:[ebx+1]
        jmp public_680158e
        public_680158c : nop
        xor esi, esi
        public_680158e : nop
        mov edx, dword ptr ss : [esp+0x20]
        push edx
        call public_68026d0
        add esp, 4
        mov eax, esi
        pop esi
        pop ebx
        public_680159f : nop
        pop edi
        pop ebp
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x68013b0)
    }
}

#undef public_680143b
#undef public_68014ab
#undef public_680151f
#undef public_680153d
#undef public_6801546
#undef public_6801549
#undef public_680155e
#undef public_6801587
#undef public_680158c
#undef public_680158e
#undef public_680159f
