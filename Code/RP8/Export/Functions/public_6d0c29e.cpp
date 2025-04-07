#include "RP8-PCH.h"


#define public_6d0c305 _public_6d0c305
#define public_6d0c430 _public_6d0c430
#define public_6d0c432 _public_6d0c432

PROC_DECLARE(0x6d0c29e, internal_6d0c29e, public_6d0c29e);
extern "C" NAKED register_t __cdecl internal_6d0c29e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x14
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x130], 0
        jne public_6d0c305
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-4]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-4], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-4]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-4], ecx
/*FIXUP push offset public_6d66938 @0x6d0c2db*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66938
        push 0xAE4
/*FIXUP push offset public_6d66970 @0x6d0c2e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66970
/*FIXUP push offset public_6d669bc @0x6d0c2ea*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d669bc
        mov edx, dword ptr ss : [ebp-4]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d0c432
        public_6d0c305 : nop
        mov dword ptr ss : [ebp-0x14], 3
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+0x130]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x2284
        mov dword ptr ss : [ebp-0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+0x10], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+0x20], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0x30], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x10]
        mov dword ptr ds : [ecx+4], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x14]
        mov dword ptr ds : [ecx+0x14], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x18]
        mov dword ptr ds : [ecx+0x24], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x1C]
        mov dword ptr ds : [ecx+0x34], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x20]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x24]
        mov dword ptr ds : [ecx+0x18], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x28]
        mov dword ptr ds : [ecx+0x28], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x2C]
        mov dword ptr ds : [ecx+0x38], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x30]
        mov dword ptr ds : [ecx+0xC], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x34]
        mov dword ptr ds : [ecx+0x1C], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x38]
        mov dword ptr ds : [ecx+0x2C], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx+0x3C]
        mov dword ptr ds : [ecx+0x3C], eax
        mov ecx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [ecx+0x40], 0
        xor edx, edx
        test edx, edx
        je public_6d0c430
        mov eax, dword ptr ss : [ebp-0xC]
        movzx ecx, byte ptr ds : [eax+0x40]
        test ecx, ecx
        jne public_6d0c430
        mov edx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [edx+0x41], 0
        mov eax, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [eax+0x40], 1
        mov ecx, dword ptr ss : [ebp-0xC]
        push ecx
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        call dword ptr ds : [ecx+0x94]
        mov dword ptr ss : [ebp-8], eax
        xor eax, eax
        cmp dword ptr ss : [ebp-8], 0
        setge al
        mov ecx, dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [ecx+0x40], al
        public_6d0c430 : nop
        xor eax, eax
        public_6d0c432 : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d0c29e)
    }
}

#undef public_6d0c305
#undef public_6d0c430
#undef public_6d0c432
