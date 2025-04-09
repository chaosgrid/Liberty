#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_54fd30);

#define public_54fdb2 _public_54fdb2
#define public_54fdf7 _public_54fdf7
#define public_54fea1 _public_54fea1

PROC_DECLARE(0x54fd30, internal_54fd30, public_54fd30);
extern "C" NAKED register_t __cdecl internal_54fd30()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x6C]
        mov edx, dword ptr ss : [esp+4]
        push esi
        inc dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [ecx+0x6C]
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx+0x6C]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [ecx+0x70]
        add dword ptr ds : [ecx+0x6C], eax
        mov edx, dword ptr ds : [ecx+0x74]
        mov eax, dword ptr ds : [ecx+0x68]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [ecx+0x78]
        add dword ptr ds : [ecx+0x74], edx
        mov eax, dword ptr ds : [ecx+0x7C]
        mov edx, dword ptr ds : [ecx+0x60]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [ecx+0x7C]
        mov edx, dword ptr ds : [ecx+0x64]
        mov dword ptr ds : [eax+4], edx
        mov eax, dword ptr ds : [ecx+0x80]
        add dword ptr ds : [ecx+0x7C], eax
        mov al, byte ptr ds : [ecx+0x58]
        test al, 1
        je public_54fdb2
        mov edx, dword ptr ds : [ecx+0x68]
        and al, 0xFE
        mov byte ptr ds : [ecx+0x58], al
        mov eax, dword ptr ds : [ecx+0x60]
        mov dword ptr ds : [ecx+0x34], edx
        mov edx, dword ptr ds : [ecx+0x64]
        mov dword ptr ds : [ecx+0x38], eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx+0x3C], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+0x28], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+0x2C], edx
        mov dword ptr ds : [ecx+0x30], eax
        public_54fdb2 : nop
        test byte ptr ds : [ecx+0x58], 4
        je public_54fea1
        mov edx, dword ptr ds : [ecx+0x5C]
        test dl, 1
        jne public_54fdf7
        mov esi, dword ptr ds : [ecx+0x68]
        fld dword ptr ss : [esp+0x10]
        shr edx, 1
        lea eax, ds:[edx+edx*2]
        lea eax, ds:[ecx+eax*8]
        mov dword ptr ds : [eax+0x34], esi
        mov esi, dword ptr ds : [ecx+0x60]
        mov dword ptr ds : [eax+0x38], esi
        mov esi, dword ptr ds : [ecx+0x64]
        mov dword ptr ds : [eax+0x3C], esi
        mov esi, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+0x28], esi
        mov esi, dword ptr ss : [esp+0xC]
        lea edx, ds:[edx+edx*2+6]
        fstp dword ptr ds : [ecx+edx*8]
        mov dword ptr ds : [eax+0x2C], esi
        public_54fdf7 : nop
        mov edx, dword ptr ds : [ecx+0x5C]
        inc edx
        mov eax, edx
        cmp eax, 4
        mov dword ptr ds : [ecx+0x5C], edx
        jb public_54fea1
        mov edx, dword ptr ds : [ecx+0x6C]
        mov dword ptr ds : [ecx+0x5C], 0
        lea eax, ds:[ecx+0x28]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ds : [ecx+0x70]
        add dword ptr ds : [ecx+0x6C], edx
        mov eax, dword ptr ds : [ecx+0x74]
        mov edx, dword ptr ds : [ecx+0x34]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [ecx+0x78]
        add dword ptr ds : [ecx+0x74], eax
        mov edx, dword ptr ds : [ecx+0x7C]
        mov eax, dword ptr ds : [ecx+0x38]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [ecx+0x7C]
        mov eax, dword ptr ds : [ecx+0x3C]
        mov dword ptr ds : [edx+4], eax
        mov edx, dword ptr ds : [ecx+0x80]
        add dword ptr ds : [ecx+0x7C], edx
        mov edx, dword ptr ds : [ecx+0x6C]
        lea eax, ds:[ecx+0x40]
        mov esi, dword ptr ds : [eax]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], esi
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ds : [ecx+0x70]
        add dword ptr ds : [ecx+0x6C], edx
        mov eax, dword ptr ds : [ecx+0x74]
        mov edx, dword ptr ds : [ecx+0x4C]
        mov dword ptr ds : [eax], edx
        mov eax, dword ptr ds : [ecx+0x78]
        add dword ptr ds : [ecx+0x74], eax
        mov edx, dword ptr ds : [ecx+0x7C]
        mov eax, dword ptr ds : [ecx+0x50]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [ecx+0x7C]
        mov eax, dword ptr ds : [ecx+0x54]
        mov dword ptr ds : [edx+4], eax
        mov esi, dword ptr ds : [ecx+0x7C]
        mov edx, dword ptr ds : [ecx+0x80]
        add esi, edx
        mov dword ptr ds : [ecx+0x7C], esi
        add dword ptr ds : [ecx+4], 2
        public_54fea1 : nop
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x54fd30)
    }
}

#undef public_54fdb2
#undef public_54fdf7
#undef public_54fea1
