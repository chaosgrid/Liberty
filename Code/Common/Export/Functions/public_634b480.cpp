#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6346e70);
CLANG_FORWARD_PROC_SYMBOL(public_6347170);
CLANG_FORWARD_PROC_SYMBOL(public_634afd0);
CLANG_FORWARD_PROC_SYMBOL(public_634b480);
CLANG_FORWARD_PROC_SYMBOL(public_634cf30);
CLANG_FORWARD_PROC_SYMBOL(public_63563d0);

#define public_634b491 _public_634b491
#define public_634b4a9 _public_634b4a9
#define public_634b510 _public_634b510
#define public_634b526 _public_634b526
#define public_634b545 _public_634b545
#define public_634b585 _public_634b585

PROC_DECLARE(0x634b480, internal_634b480, public_634b480);
extern "C" NAKED register_t __cdecl internal_634b480()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push esi
        mov esi, ecx
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x52]
        dec ecx
        js public_634b4a9
        public_634b491 : nop
        mov eax, dword ptr ds : [esi+0x54]
        mov eax, dword ptr ds : [eax+ecx*4]
        mov edx, dword ptr ds : [eax+0x78]
        and edx, 0xFFFFFF01
        or edx, 1
        dec ecx
        mov dword ptr ds : [eax+0x78], edx
        jns public_634b491
        public_634b4a9 : nop
        mov ecx, esi
        call public_6347170
        mov ecx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [ecx+0xF8]
        mov edx, dword ptr ds : [ecx+0xFC]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [ecx+0x100]
        mov dword ptr ss : [esp+0xC], eax
        fld dword ptr ss : [esp+0xC]
        fsub dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [ecx+0x104]
        mov dword ptr ss : [esp+0x10], edx
        fadd dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x24], ecx
        fsub dword ptr ss : [esp+0x18]
        fcom dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_634b510
        fst dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_63a53d0]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        jmp public_634b526
        public_634b510 : nop
        fstp st(0)
        fld dword ptr ds : [ecx+0xAC]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [ecx+0xB0]
        fstp dword ptr ss : [esp+0x20]
        public_634b526 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, esi
        call public_6346e70
        mov ecx, esi
        call public_63563d0
        xor ebx, ebx
        mov bx, word ptr ds : [esi+0x52]
        mov ebp, eax
        dec ebx
        js public_634b585
        push edi
        public_634b545 : nop
        mov ecx, dword ptr ds : [esi+0x54]
        mov edi, dword ptr ds : [ecx+ebx*4]
        mov eax, dword ptr ds : [esi+0xC]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], edi
        mov dword ptr ss : [esp+0x18], eax
        mov ecx, dword ptr ds : [eax+0xC]
        push edx
        call public_634afd0
        mov ecx, dword ptr ds : [esi+0xC]
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x14], ecx
        call public_634cf30
        dec ebx
        jns public_634b545
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        public_634b585 : nop
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x634b480)
    }
}

#undef public_634b491
#undef public_634b4a9
#undef public_634b510
#undef public_634b526
#undef public_634b545
#undef public_634b585
