#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_477ee0);

#define public_477f80 _public_477f80

PROC_DECLARE(0x477ee0, internal_477ee0, public_477ee0);
extern "C" NAKED register_t __cdecl internal_477ee0()
{
    __asm
    {
        xor eax, eax
        push esi
        push edi
        or edi, 0xFFFFFFFF
        mov dword ptr ds : [ecx+0x3C4], eax
        mov dword ptr ds : [ecx+0x3C8], edi
        mov dword ptr ds : [ecx+0x3A4], edi
        mov dword ptr ds : [ecx+0x3CC], edi
        mov dword ptr ds : [ecx+0x4F4], eax
        mov dword ptr ds : [ecx+0x3D0], eax
        mov dword ptr ds : [ecx+0x3B4], eax
        mov dword ptr ds : [ecx+0x3D4], eax
        mov dword ptr ds : [ecx+0x3D8], eax
        mov dword ptr ds : [ecx+0x3DC], eax
        mov dword ptr ds : [ecx+0x3E0], eax
        mov dword ptr ds : [ecx+0x3E4], eax
        mov dword ptr ds : [ecx+0x4B0], eax
        mov dword ptr ds : [ecx+0x4B4], eax
        mov dword ptr ds : [ecx+0x4B8], eax
        mov dword ptr ds : [ecx+0x4BC], eax
        mov dword ptr ds : [ecx+0x4C0], eax
        mov dword ptr ds : [ecx+0x4C4], eax
        mov dword ptr ds : [ecx+0x4C8], eax
        mov dword ptr ds : [ecx+0x4CC], eax
        mov dword ptr ds : [ecx+0x4D4], eax
        mov dword ptr ds : [ecx+0x4D0], eax
        mov dword ptr ds : [ecx+0x4D8], eax
        lea edx, ds:[ecx+0x3FC]
        mov esi, 5
        lea esp, ss:[esp]
        public_477f80 : nop
        mov dword ptr ds : [edx-0x14], eax
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+0x14], eax
        mov dword ptr ds : [edx+0x28], eax
        mov dword ptr ds : [edx+0x3C], eax
        mov dword ptr ds : [edx+0x50], eax
        mov dword ptr ds : [edx+0x64], eax
        mov dword ptr ds : [edx+0xA0], eax
        mov dword ptr ds : [edx+0x78], eax
        mov dword ptr ds : [edx+0x8C], eax
        add edx, 4
        dec esi
        jne public_477f80
        mov edx, 1
        mov dword ptr ds : [ecx+0x908], edi
        mov dword ptr ds : [ecx+0x90C], edi
        mov byte ptr ds : [ecx+0x4E1], al
        mov byte ptr ds : [ecx+0x4E2], al
        mov byte ptr ds : [ecx+0x4E3], al
        mov byte ptr ds : [ecx+0x4E4], al
        mov byte ptr ds : [ecx+0x4E5], al
        mov byte ptr ds : [ecx+0x4E0], al
        mov byte ptr ds : [ecx+0x4E6], al
        mov byte ptr ds : [ecx+0x4E7], al
        mov byte ptr ds : [ecx+0x35C], al
        mov dword ptr ds : [ecx+0x4F0], eax
        mov dword ptr ds : [ecx+0x360], eax
        mov dword ptr ds : [ecx+0x904], eax
        mov dword ptr ds : [ecx+0x500], eax
        mov dword ptr ds : [ecx+0x364], eax
        mov dword ptr ds : [ecx+0x368], eax
        mov dword ptr ds : [ecx+0x36C], eax
        mov dword ptr ds : [ecx+0x370], eax
        mov dword ptr ds : [ecx+0x374], eax
        mov dword ptr ds : [ecx+0x378], eax
        mov dword ptr ds : [ecx+0x37C], eax
        mov dword ptr ds : [ecx+0x388], eax
        mov dword ptr ds : [ecx+0x38C], eax
        mov dword ptr ds : [ecx+0x910], eax
        mov dword ptr ds : [ecx+0x390], eax
        mov dword ptr ds : [ecx+0x4DC], eax
        mov dword ptr ds : [ecx+0x914], eax
        mov dword ptr ds : [ecx+0x918], eax
        mov dword ptr ds : [ecx+0x398], eax
        mov dword ptr ds : [ecx+0x39C], eax
        mov dword ptr ds : [ecx+0x3A0], eax
        mov dword ptr ds : [ecx+0x91C], eax
        mov dword ptr ds : [ecx+0x920], eax
        mov dword ptr ds : [ecx+0x924], eax
        mov dword ptr ds : [ecx+0x928], eax
        mov dword ptr ds : [ecx+0x92C], eax
        mov dword ptr ds : [ecx+0x930], eax
        mov dword ptr ds : [ecx+0x934], eax
        mov dword ptr ds : [ecx+0x938], eax
        mov dword ptr ds : [ecx+0x93C], edx
        mov dword ptr ds : [ecx+0x940], edx
        mov dword ptr ds : [ecx+0x944], eax
        mov edx, dword ptr ds : [public_5c6368]
        mov dx, word ptr ds : [edx]
        pop edi
        mov word ptr ds : [ecx+0x948], dx
        mov byte ptr ds : [ecx+0x3B9], al
        mov byte ptr ds : [ecx+0x3B8], al
        mov byte ptr ds : [ecx+0x3C0], al
        mov byte ptr ds : [ecx+0x3C1], al
        mov dword ptr ds : [ecx+0x4E8], eax
        mov dword ptr ds : [ecx+0x4EC], eax
        mov dword ptr ds : [ecx+0x970], eax
        mov dword ptr ds : [ecx+0x96C], eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x477ee0)
    }
}

#undef public_477f80
