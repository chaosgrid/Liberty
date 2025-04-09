#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_57b400 _public_57b400
#define public_57b41b _public_57b41b
#define public_57b450 _public_57b450
#define public_57b45f _public_57b45f

PROC_DECLARE(0x57b3e0, internal_57b3e0, public_57b3e0);
extern "C" NAKED register_t __cdecl internal_57b3e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_57b45f
        mov eax, dword ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_57b450
        push ebp
        push edi
        lea ebx, ds:[ebx]
        public_57b400 : nop
        mov edi, dword ptr ds : [ebx+0x48C]
        mov ebp, dword ptr ds : [edi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], edi
        jne public_57b41b
        mov ebp, eax
        public_57b41b : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[esi+8]
        push ecx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ds : [ebx+0x490]
        mov edx, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc ecx
        mov dword ptr ds : [ebx+0x490], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edx+4]
        jne public_57b400
        pop edi
        pop ebp
        public_57b450 : nop
        mov al, 1
        mov byte ptr ds : [ebx+0x400], al
        mov byte ptr ds : [ebx+0x401], al
        pop esi
        public_57b45f : nop
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x57b3e0)
    }
}

#undef public_57b400
#undef public_57b41b
#undef public_57b450
#undef public_57b45f
