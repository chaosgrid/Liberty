#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6360a40);

#define public_6360a71 _public_6360a71
#define public_6360a88 _public_6360a88

PROC_DECLARE(0x6360a40, internal_6360a40, public_6360a40);
extern "C" NAKED register_t __cdecl internal_6360a40()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 8
        wait 
        fnstcw word ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-4]
        or eax, 0x300
        mov dword ptr ss : [ebp-8], eax
        fldcw word ptr ss : [ebp-8]
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ds : [public_63a5654]
        fnstsw ax
        test ah, 1
        je public_6360a71
        mov dword ptr ss : [ebp+0xC], 0x3BA3D70A
        jmp public_6360a88
        public_6360a71 : nop
        fld dword ptr ss : [ebp+0xC]
        fcomp dword ptr ds : [public_63a5464]
        fnstsw ax
        test ah, 0x41
        jne public_6360a88
        mov dword ptr ss : [ebp+0xC], 0x3DCCCCCD
        public_6360a88 : nop
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        push esi
        mov esi, dword ptr ds : [ecx+0xC]
        push esi
        mov esi, dword ptr ss : [ebp+8]
        push esi
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+4]
        fldcw word ptr ss : [ebp-4]
        pop esi
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6360a40)
    }
}

#undef public_6360a71
#undef public_6360a88
