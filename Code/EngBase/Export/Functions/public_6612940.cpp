#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612940);

#define public_661295f _public_661295f
#define public_661298e _public_661298e
#define public_6612991 _public_6612991
#define public_6612998 _public_6612998
#define public_66129b0 _public_66129b0
#define public_66129b2 _public_66129b2

PROC_DECLARE(0x6612940, internal_6612940, public_6612940);
extern "C" NAKED register_t __cdecl internal_6612940()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [ecx+0x10]
        or eax, 0xFFFFFFFF
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ecx
        jae public_66129b2
        mov ebp, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [ebp]
        public_661295f : nop
        mov ecx, dword ptr ds : [edi]
        add ecx, 8
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        cmp ecx, eax
        mov ebx, dword ptr ds : [edx+4]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x1C], esi
        mov esi, dword ptr ds : [edx+0xC]
        sete dl
        test dl, dl
        je public_6612998
        sub ecx, 0
        je public_661298e
        dec ecx
        je public_661298e
        dec ecx
        jne public_6612998
        cmp ebx, dword ptr ss : [ebp+4]
        jmp public_6612991
        public_661298e : nop
        cmp esi, dword ptr ss : [ebp+0xC]
        public_6612991 : nop
        sete cl
        test cl, cl
        jne public_66129b0
        public_6612998 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        add edi, 4
        cmp edi, ecx
        jb public_661295f
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x14
        ret 4
        public_66129b0 : nop
        mov eax, dword ptr ds : [edi]
        public_66129b2 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x6612940)
    }
}

#undef public_661295f
#undef public_661298e
#undef public_6612991
#undef public_6612998
#undef public_66129b0
#undef public_66129b2
