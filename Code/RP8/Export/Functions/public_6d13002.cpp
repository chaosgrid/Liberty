#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);

#define public_6d13069 _public_6d13069
#define public_6d130b9 _public_6d130b9
#define public_6d130db _public_6d130db
#define public_6d130ea _public_6d130ea
#define public_6d13101 _public_6d13101
#define public_6d13110 _public_6d13110
#define public_6d1315f _public_6d1315f
#define public_6d1317b _public_6d1317b
#define public_6d13193 _public_6d13193
#define public_6d1319b _public_6d1319b
#define public_6d131a2 _public_6d131a2
#define public_6d131a9 _public_6d131a9
#define public_6d131ac _public_6d131ac

PROC_DECLARE(0x6d13002, internal_6d13002, public_6d13002);
extern "C" NAKED register_t __cdecl internal_6d13002()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x1C
        mov eax, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [eax+0x124], 0
        jne public_6d13069
        mov ecx, 2
        and ecx, 0xF
        mov edx, dword ptr ss : [ebp-0xC]
        and edx, 0xFFFFFFF0
        or edx, ecx
        mov dword ptr ss : [ebp-0xC], edx
        mov eax, 0x10000
        and eax, 0xFFFFFFF
        shl eax, 4
        mov ecx, dword ptr ss : [ebp-0xC]
        and ecx, 0xF
        or ecx, eax
        mov dword ptr ss : [ebp-0xC], ecx
/*FIXUP push offset public_6d699e8 @0x6d1303f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d699e8
        push 0x1114
/*FIXUP push offset public_6d69a28 @0x6d13049*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69a28
/*FIXUP push offset public_6d69a74 @0x6d1304e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d69a74
        mov edx, dword ptr ss : [ebp-0xC]
        push edx
        mov eax, dword ptr ds : [public_6d5e018]
        call dword ptr ds : [eax]
        add esp, 0x14
        or eax, 0xFFFFFFFF
        jmp public_6d131ac
        public_6d13069 : nop
        mov dword ptr ss : [ebp-4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp+0xC]
        cmp dword ptr ds : [ecx], 0xFFFFFFFF
        je public_6d131a9
        mov edx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [ebp-8], eax
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [ecx], 0
        cmp dword ptr ss : [ebp-8], 0
        je public_6d131a9
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp-8]
        cmp eax, dword ptr ds : [edx+0x134]
        jne public_6d130b9
        push 0
        push 0
        push 0
        push 0
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [eax+0x24]
        public_6d130b9 : nop
        mov ecx, dword ptr ss : [ebp+8]
        add ecx, 0x22E4
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [edx+0x10], 0
        jne public_6d130db
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [eax], edx
        jmp public_6d130ea
        public_6d130db : nop
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        public_6d130ea : nop
        mov ecx, dword ptr ss : [ebp-8]
        cmp dword ptr ds : [ecx+0xC], 0
        jne public_6d13101
        mov edx, dword ptr ss : [ebp-0x18]
        mov eax, dword ptr ss : [ebp-8]
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d13110
        public_6d13101 : nop
        mov edx, dword ptr ss : [ebp-8]
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ss : [ebp-8]
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [eax+0x10], edx
        public_6d13110 : nop
        mov eax, dword ptr ss : [ebp-0x18]
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, 1
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x14], eax
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ss : [ebp-0x10], ecx
        cmp dword ptr ss : [ebp-0x10], 0
        je public_6d1319b
        mov edx, dword ptr ss : [ebp-0x10]
        cmp dword ptr ds : [edx+4], 0
        je public_6d1317b
        mov eax, dword ptr ss : [ebp-0x10]
        cmp dword ptr ds : [eax+8], 0
        je public_6d1315f
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x10]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [eax]
        push edx
        call dword ptr ds : [eax+0x30]
        public_6d1315f : nop
        mov ecx, dword ptr ss : [ebp-0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edx]
        push ecx
        call dword ptr ds : [edx+8]
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [eax+4], 0
        public_6d1317b : nop
        mov ecx, 1
        and ecx, 1
        test ecx, ecx
        je public_6d13193
        mov edx, dword ptr ss : [ebp-0x10]
        push edx
        call public_6d2f249
        add esp, 4
        public_6d13193 : nop
        mov eax, dword ptr ss : [ebp-0x10]
        mov dword ptr ss : [ebp-0x1C], eax
        jmp public_6d131a2
        public_6d1319b : nop
        mov dword ptr ss : [ebp-0x1C], 0
        public_6d131a2 : nop
        mov dword ptr ss : [ebp-4], 0
        public_6d131a9 : nop
        mov eax, dword ptr ss : [ebp-4]
        public_6d131ac : nop
        mov esp, ebp
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6d13002)
    }
}

#undef public_6d13069
#undef public_6d130b9
#undef public_6d130db
#undef public_6d130ea
#undef public_6d13101
#undef public_6d13110
#undef public_6d1315f
#undef public_6d1317b
#undef public_6d13193
#undef public_6d1319b
#undef public_6d131a2
#undef public_6d131a9
#undef public_6d131ac
