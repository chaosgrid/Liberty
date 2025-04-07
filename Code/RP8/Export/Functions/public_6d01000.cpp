#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01000);

#define public_6d01026 _public_6d01026
#define public_6d0102f _public_6d0102f
#define public_6d01058 _public_6d01058
#define public_6d01061 _public_6d01061
#define public_6d010b2 _public_6d010b2
#define public_6d010bb _public_6d010bb
#define public_6d010c3 _public_6d010c3
#define public_6d010c8 _public_6d010c8

PROC_DECLARE(0x6d01000, internal_6d01000, public_6d01000);
extern "C" NAKED register_t __cdecl internal_6d01000()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x2C
        mov dword ptr ss : [ebp-8], 0
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+8]
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp-0xC], ecx
        jmp public_6d0102f
        public_6d01026 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        add edx, 0x20
        mov dword ptr ss : [ebp-0xC], edx
        public_6d0102f : nop
        mov eax, dword ptr ss : [ebp-4]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0xC]
        cmp edx, dword ptr ss : [ebp-0x18]
        je public_6d010c8
        mov eax, dword ptr ss : [ebp-0xC]
        cmp dword ptr ds : [eax+4], 0
        jne public_6d01058
        mov ecx, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x1C], ecx
        jmp public_6d01061
        public_6d01058 : nop
        mov edx, dword ptr ss : [ebp-0xC]
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [ebp-0x1C], eax
        public_6d01061 : nop
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x14]
        push edx
        call dword ptr ds : [public_6d5e010]
        add esp, 4
        mov dword ptr ss : [ebp-0x10], eax
        mov eax, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [ebp-0x20], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x24], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        sub edx, dword ptr ss : [ebp-0x24]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        test eax, eax
        je public_6d010c3
        mov ecx, dword ptr ss : [ebp-0xC]
        add ecx, 0x10
        mov dword ptr ss : [ebp-0x28], ecx
        mov edx, dword ptr ss : [ebp-0x28]
        cmp dword ptr ds : [edx+4], 0
        jne public_6d010b2
        mov eax, dword ptr ds : [public_6d5e0a0]
        mov dword ptr ss : [ebp-0x2C], eax
        jmp public_6d010bb
        public_6d010b2 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x2C], edx
        public_6d010bb : nop
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-8], eax
        jmp public_6d010c8
        public_6d010c3 : nop
        jmp public_6d01026
        public_6d010c8 : nop
        mov eax, dword ptr ss : [ebp-8]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d01000)
    }
}

#undef public_6d01026
#undef public_6d0102f
#undef public_6d01058
#undef public_6d01061
#undef public_6d010b2
#undef public_6d010bb
#undef public_6d010c3
#undef public_6d010c8
