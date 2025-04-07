#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6351f80);
CLANG_FORWARD_PROC_SYMBOL(public_6352220);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_6351f98 _public_6351f98
#define public_6351fba _public_6351fba
#define public_6351ff3 _public_6351ff3
#define public_6352018 _public_6352018
#define public_6352022 _public_6352022
#define public_635204a _public_635204a
#define public_6352083 _public_6352083
#define public_63520aa _public_63520aa
#define public_63520ae _public_63520ae
#define public_63520cf _public_63520cf
#define public_6352108 _public_6352108
#define public_635212d _public_635212d

PROC_DECLARE(0x6351f80, internal_6351f80, public_6351f80);
extern "C" NAKED register_t __cdecl internal_6351f80()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        xor ebx, ebx
        mov bx, word ptr ss : [ebp+2]
        push esi
        push edi
        dec ebx
        cmp ebx, 1
        jle public_6352022
        public_6351f98 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [eax+ebx*4]
        fld dword ptr ds : [esi+0x28]
        mov edi, 0x64
        fsub dword ptr ds : [esi+0x18]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6351ff3
        public_6351fba : nop
        mov edx, dword ptr ds : [esi+0x24]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+0x2E]
        shl ecx, 4
        mov ecx, dword ptr ds : [ecx+edx+0xC]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ecx]
        push edx
        push esi
        call dword ptr ds : [eax+4]
        mov eax, edi
        dec edi
        test eax, eax
        jl public_6351ff3
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [esi+0x18]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_6351fba
        public_6351ff3 : nop
        fld dword ptr ds : [esi]
        fild dword ptr ds : [esi+0x1C]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_6352018
        mov ecx, esi
        call public_6352220
        fld dword ptr ds : [esi]
        fadd dword ptr ds : [public_63a5400]
        call public_6391dae
        mov dword ptr ds : [esi+0x1C], eax
        public_6352018 : nop
        dec ebx
        cmp ebx, 1
        jg public_6351f98
        public_6352022 : nop
        jne public_63520aa
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [ecx+4]
        fld dword ptr ds : [esi+0x28]
        mov edi, 0x64
        fsub dword ptr ds : [esi+0x18]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6352083
        public_635204a : nop
        mov eax, dword ptr ds : [esi+0x24]
        xor edx, edx
        mov dx, word ptr ds : [esi+0x2E]
        shl edx, 4
        mov ecx, dword ptr ds : [edx+eax+0xC]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        call dword ptr ds : [edx+4]
        mov ecx, edi
        dec edi
        test ecx, ecx
        jl public_6352083
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [esi+0x18]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_635204a
        public_6352083 : nop
        fld dword ptr ds : [esi]
        fild dword ptr ds : [esi+0x1C]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_63520ae
        mov ecx, esi
        call public_6352220
        fld dword ptr ds : [esi]
        fadd dword ptr ds : [public_63a5400]
        call public_6391dae
        mov dword ptr ds : [esi+0x1C], eax
        jmp public_63520ae
        public_63520aa : nop
        test ebx, ebx
        jne public_635212d
        public_63520ae : nop
        mov edx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ds : [edx]
        fld dword ptr ds : [esi+0x28]
        mov edi, 0x64
        fsub dword ptr ds : [esi+0x18]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        je public_6352108
        public_63520cf : nop
        mov ecx, dword ptr ds : [esi+0x24]
        xor eax, eax
        mov ax, word ptr ds : [esi+0x2E]
        shl eax, 4
        mov ecx, dword ptr ds : [eax+ecx+0xC]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx]
        push eax
        push esi
        call dword ptr ds : [edx+4]
        mov ecx, edi
        dec edi
        test ecx, ecx
        jl public_6352108
        fld dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [esi+0x18]
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_63a53d4]
        fnstsw ax
        test ah, 1
        jne public_63520cf
        public_6352108 : nop
        fld dword ptr ds : [esi]
        fild dword ptr ds : [esi+0x1C]
        fcompp 
        fnstsw ax
        test ah, 1
        je public_635212d
        mov ecx, esi
        call public_6352220
        fld dword ptr ds : [esi]
        fadd dword ptr ds : [public_63a5400]
        call public_6391dae
        mov dword ptr ds : [esi+0x1C], eax
        public_635212d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6351f80)
    }
}

#undef public_6351f98
#undef public_6351fba
#undef public_6351ff3
#undef public_6352018
#undef public_6352022
#undef public_635204a
#undef public_6352083
#undef public_63520aa
#undef public_63520ae
#undef public_63520cf
#undef public_6352108
#undef public_635212d
