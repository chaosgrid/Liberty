#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6805680);
CLANG_FORWARD_PROC_SYMBOL(public_6805730);
CLANG_FORWARD_PROC_SYMBOL(public_6805850);

#define public_68056aa _public_68056aa
#define public_68056c4 _public_68056c4
#define public_68056d1 _public_68056d1
#define public_68056db _public_68056db
#define public_68056e0 _public_68056e0
#define public_68056ef _public_68056ef
#define public_6805703 _public_6805703
#define public_6805706 _public_6805706
#define public_680571d _public_680571d

PROC_DECLARE(0x6805680, internal_6805680, public_6805680);
extern "C" NAKED register_t __cdecl internal_6805680()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [edi+4]
        lea eax, ds:[eax+eax*2]
        lea edx, ds:[ecx+ecx]
        cmp eax, edx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        jl public_68056aa
        push edi
        call public_6805730
        mov ecx, dword ptr ds : [edi]
        add esp, 4
        public_68056aa : nop
        mov ebx, dword ptr ss : [esp+0x14]
        xor edx, edx
        mov eax, ebx
        div ecx
        mov ebp, dword ptr ss : [esp+0x18]
        mov esi, edx
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edx+esi*4]
        test eax, eax
        je public_6805703
        public_68056c4 : nop
        cmp eax, offset public_680d810
        jne public_68056d1
        mov dword ptr ss : [esp+0x1C], esi
        jmp public_68056e0
        public_68056d1 : nop
        cmp ebp, dword ptr ds : [eax+0x10]
        je public_68056db
        cmp ebp, 0xFFFFFFFF
        jne public_68056e0
        public_68056db : nop
        cmp ebx, dword ptr ds : [eax+0x14]
        je public_680571d
        public_68056e0 : nop
        lea eax, ds:[ecx-2]
        and eax, ebx
        lea esi, ds:[esi+eax+1]
        cmp esi, ecx
        jl public_68056ef
        sub esi, ecx
        public_68056ef : nop
        mov eax, dword ptr ds : [edx+esi*4]
        test eax, eax
        jne public_68056c4
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, 0xFFFFFFFF
        je public_6805703
        mov esi, eax
        jmp public_6805706
        public_6805703 : nop
        inc dword ptr ds : [edi+4]
        public_6805706 : nop
        push ebx
        push ebp
        push ebx
        call public_6805850
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+esi*4], eax
        mov edx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [edx+esi*4]
        add esp, 0xC
        public_680571d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6805680)
    }
}

#undef public_68056aa
#undef public_68056c4
#undef public_68056d1
#undef public_68056db
#undef public_68056e0
#undef public_68056ef
#undef public_6805703
#undef public_6805706
#undef public_680571d
