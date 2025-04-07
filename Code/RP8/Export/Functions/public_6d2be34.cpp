#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2be34);
CLANG_FORWARD_PROC_SYMBOL(public_6d2d5b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d2db10);

#define public_6d2be86 _public_6d2be86
#define public_6d2be98 _public_6d2be98
#define public_6d2bea9 _public_6d2bea9
#define public_6d2bed1 _public_6d2bed1
#define public_6d2bee2 _public_6d2bee2
#define public_6d2befc _public_6d2befc
#define public_6d2bf0e _public_6d2bf0e
#define public_6d2bf34 _public_6d2bf34
#define public_6d2bf46 _public_6d2bf46
#define public_6d2bf58 _public_6d2bf58
#define public_6d2bf98 _public_6d2bf98
#define public_6d2bfaa _public_6d2bfaa
#define public_6d2bfbe _public_6d2bfbe
#define public_6d2bfe6 _public_6d2bfe6
#define public_6d2c007 _public_6d2c007

PROC_DECLARE(0x6d2be34, internal_6d2be34, public_6d2be34);
extern "C" NAKED register_t __cdecl internal_6d2be34()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x44
        mov eax, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        sub edx, dword ptr ds : [ecx+4]
        neg edx
        sbb edx, edx
        inc edx
        xor eax, eax
        mov al, dl
        test eax, eax
        jne public_6d2c007
        mov ecx, dword ptr ss : [ebp+0xC]
        movzx edx, byte ptr ds : [ecx]
        mov eax, dword ptr ss : [ebp+0xC]
        movzx ecx, byte ptr ds : [eax+1]
        cmp edx, ecx
        jne public_6d2be86
        mov edx, dword ptr ss : [ebp+0xC]
        movzx eax, byte ptr ds : [edx+1]
        test eax, eax
        je public_6d2c007
        mov ecx, dword ptr ss : [ebp+0xC]
        movzx edx, byte ptr ds : [ecx+2]
        test edx, edx
        je public_6d2c007
        public_6d2be86 : nop
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2be98
        mov dword ptr ss : [ebp-0x38], 0
        jmp public_6d2bea9
        public_6d2be98 : nop
        mov eax, dword ptr ds : [public_6d728f8]
        sub eax, dword ptr ds : [public_6d728f4]
        sar eax, 2
        mov dword ptr ss : [ebp-0x38], eax
        public_6d2bea9 : nop
        mov ecx, dword ptr ss : [ebp-0x38]
        mov dword ptr ss : [ebp-4], ecx
        mov dword ptr ss : [ebp-8], 0
        mov edx, dword ptr ss : [ebp-4]
        add edx, 1
        mov dword ptr ss : [ebp-0x30], edx
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2bed1
        mov dword ptr ss : [ebp-0x3C], 0
        jmp public_6d2bee2
        public_6d2bed1 : nop
        mov eax, dword ptr ds : [public_6d728f8]
        sub eax, dword ptr ds : [public_6d728f4]
        sar eax, 2
        mov dword ptr ss : [ebp-0x3C], eax
        public_6d2bee2 : nop
        mov ecx, dword ptr ss : [ebp-0x3C]
        cmp ecx, dword ptr ss : [ebp-0x30]
        jae public_6d2bf34
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2befc
        mov dword ptr ss : [ebp-0x40], 0
        jmp public_6d2bf0e
        public_6d2befc : nop
        mov edx, dword ptr ds : [public_6d728f8]
        sub edx, dword ptr ds : [public_6d728f4]
        sar edx, 2
        mov dword ptr ss : [ebp-0x40], edx
        public_6d2bf0e : nop
        mov eax, dword ptr ds : [public_6d728f8]
        mov dword ptr ss : [ebp-0xC], eax
        lea ecx, ss:[ebp-8]
        push ecx
        mov edx, dword ptr ss : [ebp-0x30]
        sub edx, dword ptr ss : [ebp-0x40]
        push edx
        mov eax, dword ptr ss : [ebp-0xC]
        push eax
        mov ecx, offset public_6d728f0
        call public_6d2d5b0
        jmp public_6d2bfe6
        public_6d2bf34 : nop
        cmp dword ptr ds : [public_6d728f4], 0
        jne public_6d2bf46
        mov dword ptr ss : [ebp-0x44], 0
        jmp public_6d2bf58
        public_6d2bf46 : nop
        mov ecx, dword ptr ds : [public_6d728f8]
        sub ecx, dword ptr ds : [public_6d728f4]
        sar ecx, 2
        mov dword ptr ss : [ebp-0x44], ecx
        public_6d2bf58 : nop
        mov edx, dword ptr ss : [ebp-0x30]
        cmp edx, dword ptr ss : [ebp-0x44]
        jae public_6d2bfe6
        mov eax, dword ptr ds : [public_6d728f8]
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-0x14], ecx
        mov edx, dword ptr ss : [ebp-0x30]
        mov eax, dword ptr ss : [ebp-0x14]
        lea ecx, ds:[eax+edx*4]
        mov dword ptr ss : [ebp-0x2C], ecx
        mov edx, dword ptr ds : [public_6d728f8]
        mov dword ptr ss : [ebp-0x1C], edx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ss : [ebp-0x24], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x20], ecx
        jmp public_6d2bfaa
        public_6d2bf98 : nop
        mov edx, dword ptr ss : [ebp-0x24]
        add edx, 4
        mov dword ptr ss : [ebp-0x24], edx
        mov eax, dword ptr ss : [ebp-0x20]
        add eax, 4
        mov dword ptr ss : [ebp-0x20], eax
        public_6d2bfaa : nop
        mov ecx, dword ptr ss : [ebp-0x20]
        cmp ecx, dword ptr ss : [ebp-0x1C]
        je public_6d2bfbe
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ss : [ebp-0x20]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        jmp public_6d2bf98
        public_6d2bfbe : nop
        mov edx, dword ptr ss : [ebp-0x24]
        mov dword ptr ss : [ebp-0x18], edx
        mov eax, dword ptr ds : [public_6d728f8]
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-0x28]
        push ecx
        mov edx, dword ptr ss : [ebp-0x18]
        push edx
        mov ecx, offset public_6d728f0
        call public_6d2db10
        mov eax, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [public_6d728f8], eax
        public_6d2bfe6 : nop
        mov ecx, dword ptr ds : [public_6d728f4]
        mov dword ptr ss : [ebp-0x34], ecx
        mov edx, dword ptr ss : [ebp-4]
        mov eax, dword ptr ss : [ebp-0x34]
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [eax+edx*4], ecx
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        public_6d2c007 : nop
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2be34)
    }
}

#undef public_6d2be86
#undef public_6d2be98
#undef public_6d2bea9
#undef public_6d2bed1
#undef public_6d2bee2
#undef public_6d2befc
#undef public_6d2bf0e
#undef public_6d2bf34
#undef public_6d2bf46
#undef public_6d2bf58
#undef public_6d2bf98
#undef public_6d2bfaa
#undef public_6d2bfbe
#undef public_6d2bfe6
#undef public_6d2c007
