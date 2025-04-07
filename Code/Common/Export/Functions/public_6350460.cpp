#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634fec0);
CLANG_FORWARD_PROC_SYMBOL(public_6350250);
CLANG_FORWARD_PROC_SYMBOL(public_6350310);
CLANG_FORWARD_PROC_SYMBOL(public_6350350);
CLANG_FORWARD_PROC_SYMBOL(public_6350460);
CLANG_FORWARD_PROC_SYMBOL(public_6352cf0);

#define public_635048f _public_635048f
#define public_63504bc _public_63504bc
#define public_63504c3 _public_63504c3
#define public_63504c6 _public_63504c6
#define public_63504de _public_63504de
#define public_63504e1 _public_63504e1
#define public_63504f6 _public_63504f6
#define public_6350523 _public_6350523
#define public_6350536 _public_6350536
#define public_6350538 _public_6350538

PROC_DECLARE(0x6350460, internal_6350460, public_6350460);
extern "C" NAKED register_t __cdecl internal_6350460()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov ebx, ecx
        push edi
        mov ecx, esi
        call public_6352cf0
        mov ecx, dword ptr ds : [esi+0x14]
        test ch, 0x30
        jne public_635048f
        test ch, 0xC0
        je public_6350538
        mov eax, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_635048f : nop
        test ch, 0xC0
        jne public_63504c3
        fld dword ptr ds : [esi+0x54]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 0x41
        jne public_63504bc
        test ch, 0xC
        je public_6350538
        push esi
        call public_6350350
        add esp, 4
        pop edi
        pop esi
        pop ebx
        ret 4
        public_63504bc : nop
        fld dword ptr ds : [esi+0x54]
        fchs 
        jmp public_63504c6
        public_63504c3 : nop
        fld dword ptr ds : [esi+0x50]
        public_63504c6 : nop
        mov eax, dword ptr ds : [esi+0x28]
        mov eax, dword ptr ds : [eax+0x1C]
        test eax, eax
        mov ecx, dword ptr ds : [esi+0x44]
        je public_63504de
        mov edx, dword ptr ds : [ecx+0x1C]
        test edx, edx
        jne public_6350536
        test eax, eax
        jne public_63504e1
        public_63504de : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        public_63504e1 : nop
        fadd dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [eax+0x40]
        mov ecx, esi
        fstp dword ptr ss : [esp+0x10]
        call dword ptr ds : [edx+0x18]
        test eax, eax
        jne public_6350523
        public_63504f6 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test ah, 0xC
        jne public_6350538
        push esi
        call public_6350310
        add esp, 4
        push esi
        mov ecx, ebx
        call public_634fec0
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        call public_6350250
        add esp, 8
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6350523 : nop
        cmp edi, 1
        jne public_63504f6
        mov edx, dword ptr ds : [esi]
        push ebx
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        pop edi
        pop esi
        pop ebx
        ret 4
        public_6350536 : nop
        fstp st(0)
        public_6350538 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6350460)
    }
}

#undef public_635048f
#undef public_63504bc
#undef public_63504c3
#undef public_63504c6
#undef public_63504de
#undef public_63504e1
#undef public_63504f6
#undef public_6350523
#undef public_6350536
#undef public_6350538
