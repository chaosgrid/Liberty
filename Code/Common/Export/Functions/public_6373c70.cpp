#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6373c70);
CLANG_FORWARD_PROC_SYMBOL(public_6384060);

#define public_6373ca4 _public_6373ca4
#define public_6373cbd _public_6373cbd
#define public_6373ce3 _public_6373ce3
#define public_6373ce5 _public_6373ce5
#define public_6373cee _public_6373cee

PROC_DECLARE(0x6373c70, internal_6373c70, public_6373c70);
extern "C" NAKED register_t __cdecl internal_6373c70()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0xC
        mov eax, dword ptr ds : [public_658b050]
        test eax, eax
        push ebx
        mov ebx, dword ptr ds : [public_658b24c]
        push esi
        push edi
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], 0x7FEFFFFF
        mov dword ptr ss : [esp+0xC], 0
        je public_6373ca4
        dec ebx
        public_6373ca4 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+0x34]
        test eax, eax
        je public_6373cee
        mov esi, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        add edi, 4
        test esi, esi
        je public_6373cee
        neg ebx
        public_6373cbd : nop
        mov ecx, dword ptr ss : [ebp+0xC]
        mov edx, dword ptr ds : [esi+8]
        push ebx
        push ecx
        push edx
        call public_6384060
        fcom qword ptr ss : [esp+0x1C]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_6373ce3
        fstp qword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0xC], esi
        jmp public_6373ce5
        public_6373ce3 : nop
        fstp st(0)
        public_6373ce5 : nop
        mov esi, dword ptr ds : [edi]
        add edi, 4
        test esi, esi
        jne public_6373cbd
        public_6373cee : nop
        fld qword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [ebp+0x10]
        fsqrt 
        pop edi
        pop esi
        pop ebx
        fstp qword ptr ds : [eax]
        mov eax, dword ptr ss : [esp]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6373c70)
    }
}

#undef public_6373ca4
#undef public_6373cbd
#undef public_6373ce3
#undef public_6373ce5
#undef public_6373cee
