#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4152d0);

#define public_4152f0 _public_4152f0
#define public_415301 _public_415301
#define public_41530c _public_41530c
#define public_41532a _public_41532a
#define public_41532c _public_41532c
#define public_415334 _public_415334
#define public_415337 _public_415337
#define public_415347 _public_415347

PROC_DECLARE(0x4152d0, internal_4152d0, public_4152d0);
extern "C" NAKED register_t __cdecl internal_4152d0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+8]
        push edi
        mov edi, dword ptr ds : [eax+4]
        cmp edi, edx
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], eax
        je public_415347
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        public_4152f0 : nop
        mov eax, dword ptr ds : [edi+0x10]
        test eax, eax
        mov ebx, dword ptr ds : [edi+0x14]
        mov edx, offset public_41c3f4
        je public_415301
        mov edx, eax
        public_415301 : nop
        mov esi, dword ptr ss : [ebp+8]
        cmp esi, ebx
        mov ecx, esi
        jb public_41530c
        mov ecx, ebx
        public_41530c : nop
        mov eax, dword ptr ss : [ebp+4]
        push ecx
        push edx
        push eax
        call dword ptr ds : [public_41b8fc]
        add esp, 0xC
        test eax, eax
        jne public_41532a
        cmp esi, ebx
        jb public_41532c
        cmp esi, ebx
        setne al
        test eax, eax
        public_41532a : nop
        jge public_415334
        public_41532c : nop
        mov dword ptr ss : [esp+0x10], edi
        mov edi, dword ptr ds : [edi]
        jmp public_415337
        public_415334 : nop
        mov edi, dword ptr ds : [edi+8]
        public_415337 : nop
        mov eax, dword ptr ss : [esp+0x14]
        cmp edi, dword ptr ds : [eax+8]
        jne public_4152f0
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        pop ebx
        public_415347 : nop
        pop edi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x4152d0)
    }
}

#undef public_4152f0
#undef public_415301
#undef public_41530c
#undef public_41532a
#undef public_41532c
#undef public_415334
#undef public_415337
#undef public_415347
