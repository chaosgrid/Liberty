#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2ba9a);

#define public_6d2bb59 _public_6d2bb59
#define public_6d2bb5b _public_6d2bb5b
#define public_6d2bb95 _public_6d2bb95
#define public_6d2bb9e _public_6d2bb9e

PROC_DECLARE(0x6d2ba9a, internal_6d2ba9a, public_6d2ba9a);
extern "C" NAKED register_t __cdecl internal_6d2ba9a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        mov dword ptr ss : [ebp-0xC], ecx
        mov eax, dword ptr ss : [ebp+8]
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, eax
        mov dword ptr ss : [ebp-4], ecx
        mov edx, dword ptr ss : [ebp-4]
        cmp dword ptr ds : [edx+0xC], 0
        je public_6d2bb9e
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [eax+8]
        sub edx, dword ptr ds : [ecx+0x1404]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d2bb95
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ss : [ebp+0xC]
        je public_6d2bb95
        mov eax, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [eax+0x1400], 0x100
        jb public_6d2bb5b
        movzx ecx, byte ptr ds : [public_6d72904]
        test ecx, ecx
        jne public_6d2bb59
        mov byte ptr ds : [public_6d72904], 1
        mov edx, 1
        and edx, 0xF
        mov eax, dword ptr ss : [ebp-8]
        and eax, 0xFFFFFFF0
        or eax, edx
        mov dword ptr ss : [ebp-8], eax
        mov ecx, 0x10000
        and ecx, 0xFFFFFFF
        shl ecx, 4
        mov edx, dword ptr ss : [ebp-8]
        and edx, 0xF
        or edx, ecx
        mov dword ptr ss : [ebp-8], edx
/*FIXUP push offset public_6d6c110 @0x6d2bb39*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c110
        push 0x41
/*FIXUP push offset public_6d6c140 @0x6d2bb40*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c140
/*FIXUP push offset public_6d6c18c @0x6d2bb45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6c18c
        mov eax, dword ptr ss : [ebp-8]
        push eax
        mov ecx, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_6d2bb59 : nop
        jmp public_6d2bb95
        public_6d2bb5b : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+0x1400]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [ecx+eax*4+0x1000], edx
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [eax+0x1400]
        add ecx, 1
        mov edx, dword ptr ss : [ebp-0xC]
        mov dword ptr ds : [edx+0x1400], ecx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ds : [ecx+0x1404]
        mov dword ptr ds : [eax+8], edx
        public_6d2bb95 : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_6d2bb9e : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [edx+8]
        sub ecx, dword ptr ds : [eax+0x1404]
        neg ecx
        sbb ecx, ecx
        inc ecx
        mov al, cl
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d2ba9a)
    }
}

#undef public_6d2bb59
#undef public_6d2bb5b
#undef public_6d2bb95
#undef public_6d2bb9e
