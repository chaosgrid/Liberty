#include "Common-PCH.h"


#define public_62ad0ee _public_62ad0ee
#define public_62ad143 _public_62ad143

PROC_DECLARE(0x62ad090, internal_62ad090, public_62ad090);
extern "C" NAKED register_t __cdecl internal_62ad090()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xE8]
        sub esp, 0xC
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62ad143
        mov al, byte ptr ds : [ecx+0x11C]
        test al, al
        push esi
        push edi
        jne public_62ad0ee
        lea eax, ds:[ecx+0x2C]
        mov esi, eax
        mov edi, dword ptr ds : [esi]
        lea edx, ds:[ecx+0x104]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], esi
        mov esi, dword ptr ds : [eax]
        lea edx, ds:[ecx+0x110]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+4], esi
        mov byte ptr ds : [ecx+0x11C], 1
        mov dword ptr ds : [edx+8], eax
        public_62ad0ee : nop
        fld dword ptr ss : [esp+0x18]
        lea eax, ds:[ecx+0x2C]
        mov esi, eax
        mov edi, dword ptr ds : [esi]
        lea edx, ds:[ecx+0x110]
        mov dword ptr ds : [edx], edi
        mov edi, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], esi
        fmul dword ptr ds : [ecx+0xF8]
        fld dword ptr ss : [esp+0x18]
        pop edi
        fmul dword ptr ds : [ecx+0xFC]
        pop esi
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [ecx+0x100]
        fstp dword ptr ss : [esp+8]
        fxch 
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        public_62ad143 : nop
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62ad090)
    }
}

#undef public_62ad0ee
#undef public_62ad143
