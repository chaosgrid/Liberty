#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_637fd60);
CLANG_FORWARD_PROC_SYMBOL(public_6383a80);
CLANG_FORWARD_PROC_SYMBOL(public_6383f50);

#define public_6383f7e _public_6383f7e
#define public_6383f83 _public_6383f83
#define public_6383faa _public_6383faa
#define public_6383fdc _public_6383fdc
#define public_6384013 _public_6384013
#define public_638401c _public_638401c
#define public_6384022 _public_6384022
#define public_6384028 _public_6384028
#define public_6384055 _public_6384055

PROC_DECLARE(0x6383f50, internal_6383f50, public_6383f50);
extern "C" NAKED register_t __cdecl internal_6383f50()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x14
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        push edi
        mov edi, dword ptr ss : [ebp+8]
        je public_6383faa
        test edi, edi
        je public_6383f7e
        mov eax, dword ptr ds : [public_658b880]
        test eax, eax
        je public_6383f7e
        fld qword ptr ds : [public_658b6a0]
        fadd qword ptr ds : [edi+8]
        jmp public_6383f83
        public_6383f7e : nop
        call public_6383a80
        public_6383f83 : nop
        fstp qword ptr ds : [esi]
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_6383faa
        fild dword ptr ds : [public_658b24c]
        fsqrt 
        fmul qword ptr ds : [public_658b878]
        fadd qword ptr ds : [esi]
        fstp qword ptr ds : [esi]
        public_6383faa : nop
        mov ebx, dword ptr ss : [ebp+0x10]
        test ebx, ebx
        je public_6384055
        test edi, edi
        je public_6384022
        mov eax, dword ptr ds : [edi+0x34]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], 0x7FEFFFFF
        je public_638401c
        lea esi, ds:[eax+4]
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        je public_638401c
        public_6383fdc : nop
        inc dword ptr ds : [public_658bb70]
        mov edx, dword ptr ds : [eax+8]
        lea ecx, ss:[esp+0x18]
        push ecx
        push edi
        push edx
        call public_637fd60
        fld qword ptr ss : [esp+0x1C]
        fcomp qword ptr ss : [esp+0x24]
        add esp, 0xC
        fnstsw ax
        test ah, 0x41
        jne public_6384013
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        public_6384013 : nop
        mov eax, dword ptr ds : [esi]
        add esi, 4
        test eax, eax
        jne public_6383fdc
        public_638401c : nop
        fld qword ptr ss : [esp+0x10]
        jmp public_6384028
        public_6384022 : nop
        fld qword ptr ds : [public_658b898]
        public_6384028 : nop
        fsub qword ptr ds : [public_658b6a0]
        fstp qword ptr ds : [ebx]
        fld qword ptr ds : [public_658b878]
        fcomp qword ptr ds : [public_63a5920]
        fnstsw ax
        test ah, 1
        je public_6384055
        fild dword ptr ds : [public_658b24c]
        fsqrt 
        fmul qword ptr ds : [public_658b878]
        fsubr qword ptr ds : [ebx]
        fstp qword ptr ds : [ebx]
        public_6384055 : nop
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6383f50)
    }
}

#undef public_6383f7e
#undef public_6383f83
#undef public_6383faa
#undef public_6383fdc
#undef public_6384013
#undef public_638401c
#undef public_6384022
#undef public_6384028
#undef public_6384055
