#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d16570);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f249);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);

#define public_6d165c9 _public_6d165c9
#define public_6d165f2 _public_6d165f2
#define public_6d165fa _public_6d165fa
#define public_6d16601 _public_6d16601
#define public_6d1664b _public_6d1664b
#define public_6d1667f _public_6d1667f

PROC_DECLARE(0x6d16570, internal_6d16570, public_6d16570);
extern "C" NAKED register_t __cdecl internal_6d16570()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x28
        push esi
        push edi
        mov dword ptr ss : [ebp-0x24], ecx
        mov eax, dword ptr ss : [ebp+8]
        xor ecx, ecx
        cmp dword ptr ds : [eax], 0
        setne cl
        xor edx, edx
        mov dl, cl
        test edx, edx
        je public_6d1667f
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+4]
        add ecx, 1
        mov dword ptr ss : [ebp-8], ecx
        mov edx, dword ptr ss : [ebp-8]
        shl edx, 2
        push edx
        call public_6d2f2a0
        add esp, 4
        mov dword ptr ss : [ebp-0xC], eax
        cmp dword ptr ss : [ebp-0xC], 0
        je public_6d165fa
        mov eax, dword ptr ss : [ebp-8]
        mov dword ptr ss : [ebp-0x1C], eax
        mov dword ptr ss : [ebp-0x18], 4
        mov ecx, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x14], ecx
        public_6d165c9 : nop
        mov edx, dword ptr ss : [ebp-0x1C]
        sub edx, 1
        mov dword ptr ss : [ebp-0x1C], edx
        cmp dword ptr ss : [ebp-0x1C], 0
        jl public_6d165f2
        push 0
        call public_6d5cc30
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp-0x14]
        add edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ss : [ebp-0x14], edx
        jmp public_6d165c9
        public_6d165f2 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        mov dword ptr ss : [ebp-0x28], eax
        jmp public_6d16601
        public_6d165fa : nop
        mov dword ptr ss : [ebp-0x28], 0
        public_6d16601 : nop
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ss : [ebp-4], ecx
        cmp dword ptr ss : [ebp-4], 0
        je public_6d1667f
        mov edx, dword ptr ss : [ebp-0x24]
        cmp dword ptr ds : [edx+4], 0
        je public_6d1664b
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+4]
        shl ecx, 2
        mov edx, dword ptr ss : [ebp-0x24]
        mov esi, dword ptr ds : [edx+8]
        mov edi, dword ptr ss : [ebp-4]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp-0x10], edx
        mov eax, dword ptr ss : [ebp-0x10]
        push eax
        call public_6d2f249
        add esp, 4
        public_6d1664b : nop
        mov ecx, dword ptr ss : [ebp-0x24]
        mov edx, dword ptr ss : [ebp-4]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp-0x24]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [edx+8]
        lea ecx, ds:[eax+ecx*4]
        mov dword ptr ss : [ebp-0x20], ecx
        mov edx, dword ptr ss : [ebp-0x20]
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        mov eax, dword ptr ds : [edx+4]
        add eax, 1
        mov ecx, dword ptr ss : [ebp-0x24]
        mov dword ptr ds : [ecx+4], eax
        public_6d1667f : nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6d16570)
    }
}

#undef public_6d165c9
#undef public_6d165f2
#undef public_6d165fa
#undef public_6d16601
#undef public_6d1664b
#undef public_6d1667f
