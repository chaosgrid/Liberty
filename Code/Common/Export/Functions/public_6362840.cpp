#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6362840);
CLANG_FORWARD_PROC_SYMBOL(public_6362c70);

#define public_63628a5 _public_63628a5
#define public_63628c6 _public_63628c6
#define public_63628d0 _public_63628d0
#define public_6362911 _public_6362911

PROC_DECLARE(0x6362840, internal_6362840, public_6362840);
extern "C" NAKED register_t __cdecl internal_6362840()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x80]
        lea ecx, ds:[esi+0x80]
        call dword ptr ds : [eax+0xC]
        cmp eax, dword ptr ds : [public_658ab3c]
        jg public_6362911
        mov eax, dword ptr ds : [esi+0x2C]
        and eax, 0xFFFFFFF0
        mov ecx, dword ptr ds : [eax]
        and ecx, 0xFFF
        inc ecx
        shl ecx, 4
        sub eax, ecx
        mov ecx, dword ptr ds : [esi+0x48]
        and ecx, 0xFFFFFFF0
        mov edx, dword ptr ds : [ecx]
        and edx, 0xFFF
        inc edx
        shl edx, 4
        push ebx
        mov bl, byte ptr ds : [eax+8]
        sub ecx, edx
        mov dl, 3
        test dl, bl
        push edi
        je public_63628c6
        test byte ptr ds : [ecx+8], dl
        jne public_63628a5
        mov dword ptr ds : [esi+0x84], 0
        jmp public_63628d0
        public_63628a5 : nop
        mov edx, dword ptr ds : [eax+4]
        fld dword ptr ds : [edx+eax+0x14]
        mov edi, dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [edi+ecx+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_63628c6
        mov dword ptr ds : [esi+0x84], 0
        jmp public_63628d0
        public_63628c6 : nop
        mov dword ptr ds : [esi+0x84], 1
        public_63628d0 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx]
        lea edi, ss:[esp+0x10]
        push edi
        lea edi, ss:[esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+0x44]
        push edi
        push eax
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x14]
        fadd dword ptr ss : [esp+0x10]
        and eax, 0xFFD3FFFF
        push ecx
        or eax, 0x100000
        fstp dword ptr ss : [esp]
        mov ecx, esi
        mov dword ptr ds : [esi+0x14], eax
        call public_6362c70
        pop edi
        pop ebx
        public_6362911 : nop
        pop esi
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6362840)
    }
}

#undef public_63628a5
#undef public_63628c6
#undef public_63628d0
#undef public_6362911
