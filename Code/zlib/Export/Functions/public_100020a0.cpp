#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_10001ff0);

#define public_1000222e _public_1000222e
#define public_10002234 _public_10002234
#define public_10002240 _public_10002240

PROC_DECLARE(0x100020a0, internal_100020a0, public_100020a0);
extern "C" NAKED register_t __cdecl internal_100020a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        push edi
        je public_10002240
        mov ebp, dword ptr ss : [esp+0x14]
        test ebp, ebp
        je public_10002240
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_10002240
        mov ecx, 0xE
        mov edi, ebp
        push 0x16B8
        rep movsd
        mov eax, dword ptr ss : [ebp+0x28]
        push 1
        push eax
        call dword ptr ss : [ebp+0x20]
        mov ebx, eax
        add esp, 0xC
        test ebx, ebx
        je public_10002234
        mov esi, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [ebp+0x1C], ebx
        mov ecx, 0x5AE
        mov edi, ebx
        rep movsd
        mov ecx, dword ptr ds : [ebx+0x24]
        push 2
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ss : [ebp+0x28]
        push ecx
        push edx
        call dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [ebx+0x30], eax
        mov eax, dword ptr ds : [ebx+0x24]
        mov ecx, dword ptr ss : [ebp+0x28]
        push 2
        push eax
        push ecx
        call dword ptr ss : [ebp+0x20]
        mov edx, dword ptr ds : [ebx+0x44]
        push 2
        mov dword ptr ds : [ebx+0x38], eax
        mov eax, dword ptr ss : [ebp+0x28]
        push edx
        push eax
        call dword ptr ss : [ebp+0x20]
        mov ecx, dword ptr ds : [ebx+0x1694]
        push 4
        mov dword ptr ds : [ebx+0x3C], eax
        mov edx, dword ptr ss : [ebp+0x28]
        push ecx
        push edx
        call dword ptr ss : [ebp+0x20]
        mov edi, dword ptr ds : [ebx+0x30]
        add esp, 0x30
        test edi, edi
        mov dword ptr ds : [ebx+8], eax
        je public_1000222e
        mov ecx, dword ptr ds : [ebx+0x38]
        test ecx, ecx
        je public_1000222e
        mov ecx, dword ptr ds : [ebx+0x3C]
        test ecx, ecx
        je public_1000222e
        test eax, eax
        je public_1000222e
        mov ecx, dword ptr ds : [ebx+0x24]
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx+0x30]
        shl ecx, 1
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov esi, dword ptr ds : [edx+0x38]
        mov ecx, dword ptr ds : [ebx+0x24]
        mov edi, dword ptr ds : [ebx+0x38]
        shl ecx, 1
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov esi, dword ptr ds : [edx+0x3C]
        mov ecx, dword ptr ds : [ebx+0x44]
        mov edi, dword ptr ds : [ebx+0x3C]
        shl ecx, 1
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov esi, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [ebx+0xC]
        mov edi, dword ptr ds : [ebx+8]
        mov ebp, ecx
        shr ecx, 2
        rep movsd
        mov ecx, ebp
        and ecx, 3
        rep movsb
        mov edi, dword ptr ds : [edx+8]
        mov ecx, dword ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [ebx+8]
        sub ecx, edi
        add ecx, esi
        mov dword ptr ds : [ebx+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x1694]
        mov edx, ecx
        shr edx, 1
        lea eax, ds:[eax+edx*2]
        lea edx, ds:[esi+ecx*2]
        add ecx, edx
        pop edi
        mov dword ptr ds : [ebx+0x169C], eax
        mov dword ptr ds : [ebx+0x1690], ecx
        lea eax, ds:[ebx+0x8C]
        pop esi
        lea ecx, ds:[ebx+0x980]
        lea edx, ds:[ebx+0xA74]
        mov dword ptr ds : [ebx+0xB10], eax
        pop ebp
        mov dword ptr ds : [ebx+0xB1C], ecx
        mov dword ptr ds : [ebx+0xB28], edx
        xor eax, eax
        pop ebx
        ret 8
        public_1000222e : nop
        push ebp
        call public_10001ff0
        public_10002234 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFC
        pop ebx
        ret 8
        public_10002240 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0xFFFFFFFE
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x100020a0)
    }
}

#undef public_1000222e
#undef public_10002234
#undef public_10002240
