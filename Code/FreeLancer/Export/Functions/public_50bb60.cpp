#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_50bb60);
CLANG_FORWARD_PROC_SYMBOL(public_50c120);

#define public_50bbbf _public_50bbbf
#define public_50bbc2 _public_50bbc2

PROC_DECLARE(0x50bb60, internal_50bb60, public_50bb60);
extern "C" NAKED register_t __cdecl internal_50bb60()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x29]
        test al, al
        je public_50bbc2
        mov eax, dword ptr ds : [ebx+0x2C]
        and eax, 3
        cmp al, 3
        jne public_50bbbf
        push esi
        mov esi, dword ptr ds : [ebx+8]
        add esi, 2
        push edi
        mov dword ptr ds : [ebx+8], esi
        call public_50c120
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        lea esi, ds:[eax-5]
        shl esi, 5
        add esi, ecx
        lea edi, ds:[eax-2]
        shl edi, 5
        add edi, ecx
        mov ecx, 8
        rep movsd
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        lea esi, ds:[eax-3]
        shl esi, 5
        add esi, ecx
        shl eax, 5
        lea edi, ds:[eax+ecx-0x20]
        mov ecx, 8
        rep movsd
        pop edi
        pop esi
        public_50bbbf : nop
        inc dword ptr ds : [ebx+0x2C]
        public_50bbc2 : nop
        mov ecx, dword ptr ds : [ebx+8]
        fld dword ptr ss : [esp+8]
        mov al, byte ptr ds : [ebx+0x30]
        mov edx, dword ptr ds : [ebx+4]
        shl ecx, 5
        mov byte ptr ds : [ecx+edx+0xE], al
        mov ecx, dword ptr ds : [ebx+8]
        mov al, byte ptr ds : [ebx+0x31]
        mov edx, dword ptr ds : [ebx+4]
        shl ecx, 5
        mov byte ptr ds : [ecx+edx+0xD], al
        mov ecx, dword ptr ds : [ebx+8]
        mov al, byte ptr ds : [ebx+0x32]
        mov edx, dword ptr ds : [ebx+4]
        shl ecx, 5
        mov byte ptr ds : [ecx+edx+0xC], al
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        mov al, byte ptr ds : [ebx+0x33]
        shl ecx, 5
        mov byte ptr ds : [ecx+edx+0xF], al
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+0x34]
        shl ecx, 5
        mov dword ptr ds : [ecx+edx+0x10], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+0x38]
        shl ecx, 5
        mov dword ptr ds : [ecx+edx+0x14], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+0x3C]
        shl ecx, 5
        mov dword ptr ds : [ecx+edx+0x18], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        mov eax, dword ptr ds : [ebx+0x40]
        shl ecx, 5
        mov dword ptr ds : [ecx+edx+0x1C], eax
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ds : [ebx+4]
        shl ecx, 5
        fstp dword ptr ds : [ecx+edx]
        mov eax, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0xC]
        shl eax, 5
        fstp dword ptr ds : [eax+ecx+4]
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ds : [ebx+4]
        fld dword ptr ss : [esp+0x10]
        shl edx, 5
        fstp dword ptr ds : [edx+eax+8]
        mov eax, dword ptr ds : [ebx+8]
        inc eax
        mov ecx, ebx
        mov dword ptr ds : [ebx+8], eax
        call public_50c120
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x50bb60)
    }
}

#undef public_50bbbf
#undef public_50bbc2
