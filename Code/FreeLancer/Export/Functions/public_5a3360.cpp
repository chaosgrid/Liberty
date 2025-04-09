#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a3360);

#define public_5a3370 _public_5a3370

PROC_DECLARE(0x5a3360, internal_5a3360, public_5a3360);
extern "C" NAKED register_t __cdecl internal_5a3360()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0x18]
        sub esp, 0xC
        test eax, eax
        jne public_5a3370
        mov eax, 0xF
        public_5a3370 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x384], eax
        push esi
        lea eax, ds:[ecx+0xA8]
        mov esi, eax
        push edi
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+4], edi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], edx
        fld dword ptr ds : [eax]
        fadd dword ptr ds : [ecx+0x60]
        pop edi
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx+0x64]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        lea eax, ds:[ecx+0x350]
        fadd dword ptr ds : [ecx+0x68]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], edx
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx]
        lea eax, ds:[ecx+0xB4]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [eax+4], esi
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [eax+8], edx
        mov al, byte ptr ds : [ecx+0x35C]
        mov dl, byte ptr ss : [esp+0x1C]
        shl dl, 3
        xor dl, al
        and dl, 8
        xor dl, al
        mov al, byte ptr ss : [esp+0x20]
        mov byte ptr ds : [ecx+0x35C], dl
        mov edx, dword ptr ss : [esp+0x24]
        mov byte ptr ds : [ecx+0x2D1], al
        mov dword ptr ds : [ecx+0xCC], edx
        pop esi
        add esp, 0xC
        ret 0x18
        UNREACHABLE_TRAP(0x5a3360)
    }
}

#undef public_5a3370
