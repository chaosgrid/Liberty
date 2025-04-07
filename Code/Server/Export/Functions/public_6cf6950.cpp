#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf6950);
CLANG_FORWARD_PROC_SYMBOL(public_6cf73d0);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7770);
CLANG_FORWARD_PROC_SYMBOL(public_6cf79e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d006c0);

#define public_6cf69a7 _public_6cf69a7
#define public_6cf69a9 _public_6cf69a9
#define public_6cf69cf _public_6cf69cf
#define public_6cf6a10 _public_6cf6a10
#define public_6cf6a20 _public_6cf6a20
#define public_6cf6a23 _public_6cf6a23
#define public_6cf6a27 _public_6cf6a27
#define public_6cf6a4b _public_6cf6a4b
#define public_6cf6a57 _public_6cf6a57
#define public_6cf6a74 _public_6cf6a74
#define public_6cf6a81 _public_6cf6a81
#define public_6cf6a8c _public_6cf6a8c
#define public_6cf6a90 _public_6cf6a90
#define public_6cf6aa8 _public_6cf6aa8

PROC_DECLARE(0x6cf6950, internal_6cf6950, public_6cf6950);
extern "C" NAKED register_t __cdecl internal_6cf6950()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        lea eax, ss:[esp+0x14]
        mov ebx, ecx
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        call public_6d006c0
        add esp, 0xC
        test al, al
        je public_6cf6aa8
        mov edi, dword ptr ss : [esp+0x10]
        test edi, edi
        je public_6cf6aa8
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_6cf69a7
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_6cf69a7
        mov esi, eax
        jmp public_6cf69a9
        public_6cf69a7 : nop
        xor esi, esi
        public_6cf69a9 : nop
        push edi
        mov ecx, ebx
        call public_6cf73d0
        test al, al
        jne public_6cf6a8c
        test esi, esi
        je public_6cf69cf
        mov edx, dword ptr ds : [esi+0xE0]
        shr edx, 7
        test dl, 1
        jne public_6cf6a8c
        public_6cf69cf : nop
        call dword ptr ds : [public_6d641c0]
        test al, al
        jne public_6cf6aa8
        test esi, esi
        je public_6cf6aa8
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        jne public_6cf6a90
        mov ecx, dword ptr ds : [ebx+0x18]
        mov esi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ebx+0x1C]
        mov ebp, dword ptr ss : [esp+0x1C]
        add ebx, 0x14
        cmp esi, edx
        mov edi, ecx
        mov al, 1
        je public_6cf6a27
        lea esp, ss:[esp]
        public_6cf6a10 : nop
        cmp ebp, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov edi, esi
        je public_6cf6a20
        mov esi, dword ptr ds : [esi]
        jmp public_6cf6a23
        public_6cf6a20 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6cf6a23 : nop
        cmp esi, edx
        jne public_6cf6a10
        public_6cf6a27 : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        je public_6cf6a4b
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edi
        push esi
        lea edx, ss:[esp+0x2C]
        push edx
        mov ecx, ebx
        call public_6cf7770
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6cf6a4b : nop
        test al, al
        mov dword ptr ss : [esp+0x24], edi
        je public_6cf6a81
        cmp edi, dword ptr ds : [ecx]
        jne public_6cf6a74
        public_6cf6a57 : nop
        lea eax, ss:[esp+0x1C]
        push eax
        push edi
        push esi
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, ebx
        call public_6cf7770
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6cf6a74 : nop
        lea ecx, ss:[esp+0x24]
        call public_6cf79e0
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6cf6a81 : nop
        mov edx, dword ptr ss : [esp+0x24]
        cmp dword ptr ds : [edx+0xC], ebp
        jae public_6cf6aa8
        jmp public_6cf6a57
        public_6cf6a8c : nop
        mov eax, dword ptr ss : [esp+0x20]
        public_6cf6a90 : nop
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        mov eax, dword ptr ds : [ebx+0x38]
        push eax
        call dword ptr ds : [edx+0xFC]
        public_6cf6aa8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6cf6950)
    }
}

#undef public_6cf69a7
#undef public_6cf69a9
#undef public_6cf69cf
#undef public_6cf6a10
#undef public_6cf6a20
#undef public_6cf6a23
#undef public_6cf6a27
#undef public_6cf6a4b
#undef public_6cf6a57
#undef public_6cf6a74
#undef public_6cf6a81
#undef public_6cf6a8c
#undef public_6cf6a90
#undef public_6cf6aa8
