#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);

#define public_6d34954 _public_6d34954
#define public_6d34980 _public_6d34980
#define public_6d34990 _public_6d34990
#define public_6d349b7 _public_6d349b7
#define public_6d349c3 _public_6d349c3
#define public_6d349c8 _public_6d349c8
#define public_6d349d8 _public_6d349d8
#define public_6d349da _public_6d349da
#define public_6d349e3 _public_6d349e3

PROC_DECLARE(0x6d34910, internal_6d34910, public_6d34910);
extern "C" NAKED register_t __cdecl internal_6d34910()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov ebp, dword ptr ds : [esi+0x10]
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, ebp
        xor ebx, ebx
        cmp ecx, eax
        je public_6d349c8
        cmp word ptr ds : [eax], 0xA
        je public_6d349c8
        add eax, 2
        mov edx, eax
        sub edx, ebp
        test edx, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], eax
        jne public_6d34980
        mov ebx, dword ptr ds : [edi+0x10]
        public_6d34954 : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        lea eax, ds:[edx+8]
        cmp eax, dword ptr ds : [ecx+0x100C]
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d349d8
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d349da
        public_6d34980 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d349c3
        mov ebx, 1
        cmp eax, ebx
        jbe public_6d34954
        public_6d34990 : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0x18], ecx
        mov eax, dword ptr ds : [esi+0x10]
        cmp dword ptr ds : [esi+0xC], eax
        je public_6d349b7
        cmp word ptr ds : [eax], 0xA
        je public_6d349b7
        add eax, 2
        mov dword ptr ds : [esi+0x10], eax
        mov eax, dword ptr ds : [edi+0xC]
        inc ebx
        cmp ebx, eax
        jb public_6d34990
        jmp public_6d34954
        public_6d349b7 : nop
        pop edi
        mov dword ptr ds : [esi+0x10], ebp
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d349c3 : nop
        mov dword ptr ds : [esi+0x10], ebp
        jmp public_6d34954
        public_6d349c8 : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        je public_6d34954
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        ret 4
        public_6d349d8 : nop
        mov eax, edx
        public_6d349da : nop
        test eax, eax
        je public_6d349e3
        mov dword ptr ds : [eax], ebp
        mov dword ptr ds : [eax+4], ebx
        public_6d349e3 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        mov dword ptr ds : [esi+0x18], edx
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d34910)
    }
}

#undef public_6d34954
#undef public_6d34980
#undef public_6d34990
#undef public_6d349b7
#undef public_6d349c3
#undef public_6d349c8
#undef public_6d349d8
#undef public_6d349da
#undef public_6d349e3
