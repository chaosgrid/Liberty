#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e65);
CLANG_FORWARD_PROC_SYMBOL(public_6d4278c);

#define public_6d427f5 _public_6d427f5
#define public_6d42802 _public_6d42802
#define public_6d42810 _public_6d42810
#define public_6d4281c _public_6d4281c
#define public_6d42825 _public_6d42825
#define public_6d4282b _public_6d4282b
#define public_6d42852 _public_6d42852
#define public_6d42857 _public_6d42857
#define public_6d42859 _public_6d42859

PROC_DECLARE(0x6d4278c, internal_6d4278c, public_6d4278c);
extern "C" NAKED register_t __cdecl internal_6d4278c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        cmp dword ptr ss : [ebp+8], 0
        push esi
        push edi
        je public_6d42857
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d42857
        mov edi, dword ptr ss : [ebp+0x10]
        test edi, edi
        je public_6d42857
        mov edx, dword ptr ss : [ebp+0x14]
        test edx, edx
        je public_6d42857
        mov esi, dword ptr ss : [ebp+0x18]
        test esi, esi
        je public_6d42857
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6d42857
        push ebx
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], ebx
        movzx edx, byte ptr ds : [eax+0x18]
        mov dword ptr ds : [esi], edx
        movzx edx, byte ptr ds : [eax+0x19]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [ebp+0x24]
        test edx, edx
        je public_6d427f5
        movzx ebx, byte ptr ds : [eax+0x1A]
        mov dword ptr ds : [edx], ebx
        public_6d427f5 : nop
        mov edx, dword ptr ss : [ebp+0x28]
        test edx, edx
        je public_6d42802
        movzx ebx, byte ptr ds : [eax+0x1B]
        mov dword ptr ds : [edx], ebx
        public_6d42802 : nop
        mov edx, dword ptr ss : [ebp+0x20]
        test edx, edx
        pop ebx
        je public_6d42810
        movzx eax, byte ptr ds : [eax+0x1C]
        mov dword ptr ds : [edx], eax
        public_6d42810 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, 3
        jne public_6d4281c
        xor eax, eax
        inc eax
        jmp public_6d42825
        public_6d4281c : nop
        movsx eax, cl
        and eax, 2
        or eax, 1
        public_6d42825 : nop
        test cl, 4
        je public_6d4282b
        inc eax
        public_6d4282b : nop
        mov ecx, dword ptr ds : [esi]
        imul ecx, eax
        add ecx, 7
        sar ecx, 3
        xor edx, edx
        mov eax, 0x7FFFFFFF
        div ecx
        cmp dword ptr ds : [edi], eax
        jbe public_6d42852
/*FIXUP push offset public_6d60ea0 @0x6d42843*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d60ea0
        push dword ptr ss : [ebp+8]
        call public_6d41e65
        pop ecx
        pop ecx
        public_6d42852 : nop
        xor eax, eax
        inc eax
        jmp public_6d42859
        public_6d42857 : nop
        xor eax, eax
        public_6d42859 : nop
        pop edi
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d4278c)
    }
}

#undef public_6d427f5
#undef public_6d42802
#undef public_6d42810
#undef public_6d4281c
#undef public_6d42825
#undef public_6d4282b
#undef public_6d42852
#undef public_6d42857
#undef public_6d42859
