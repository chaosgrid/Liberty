#include "RP8-PCH.h"


#define public_6d113bb _public_6d113bb
#define public_6d113d8 _public_6d113d8
#define public_6d113ef _public_6d113ef
#define public_6d113f7 _public_6d113f7
#define public_6d11413 _public_6d11413
#define public_6d11424 _public_6d11424
#define public_6d1142a _public_6d1142a
#define public_6d1148f _public_6d1148f
#define public_6d114ab _public_6d114ab
#define public_6d114b0 _public_6d114b0

PROC_DECLARE(0x6d1135d, internal_6d1135d, public_6d1135d);
extern "C" NAKED register_t __cdecl internal_6d1135d()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x134
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx+0xC], 0xFFFFFFFF
        mov edx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0x16C]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x18], eax
        mov ecx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d1142a
        public_6d113bb : nop
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        movsx edx, byte ptr ds : [ecx+0x35]
        test edx, edx
        jne public_6d113f7
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x24], ecx
        public_6d113d8 : nop
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [edx]
        movsx ecx, byte ptr ds : [eax+0x35]
        test ecx, ecx
        jne public_6d113ef
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-0x24], eax
        jmp public_6d113d8
        public_6d113ef : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-4], ecx
        jmp public_6d11424
        public_6d113f7 : nop
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x20]
        mov edx, dword ptr ss : [ebp-4]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_6d11413
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-4], eax
        jmp public_6d113f7
        public_6d11413 : nop
        mov ecx, dword ptr ss : [ebp-4]
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ss : [ebp-0x20]
        je public_6d11424
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ss : [ebp-4], eax
        public_6d11424 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-8], ecx
        public_6d1142a : nop
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx+0x16C]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-0xC], ecx
        mov edx, dword ptr ss : [ebp-4]
        sub edx, dword ptr ss : [ebp-0xC]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        neg eax
        sbb eax, eax
        inc eax
        xor ecx, ecx
        mov cl, al
        test ecx, ecx
        je public_6d114b0
        mov edx, dword ptr ss : [ebp-4]
        add edx, 0x10
        mov dword ptr ss : [ebp-0x2C], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        cmp dword ptr ds : [eax+0x20], 0
        je public_6d114ab
        mov ecx, dword ptr ss : [ebp-0x2C]
        cmp dword ptr ds : [ecx+0x10], 0
        je public_6d1148f
        mov edx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-0x2C]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [ecx+0x30]
        public_6d1148f : nop
        mov edx, dword ptr ss : [ebp-0x2C]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov edx, dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [ecx+0x20], 0
        public_6d114ab : nop
        jmp public_6d113bb
        public_6d114b0 : nop
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [edx+0x17C], 0
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d1135d)
    }
}

#undef public_6d113bb
#undef public_6d113d8
#undef public_6d113ef
#undef public_6d113f7
#undef public_6d11413
#undef public_6d11424
#undef public_6d1142a
#undef public_6d1148f
#undef public_6d114ab
#undef public_6d114b0
