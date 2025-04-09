#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5803d0);
CLANG_FORWARD_PROC_SYMBOL(public_582120);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_59eee0);

#define public_58214c _public_58214c
#define public_58217f _public_58217f
#define public_582189 _public_582189
#define public_5821e3 _public_5821e3
#define public_582235 _public_582235
#define public_58227d _public_58227d
#define public_5822b0 _public_5822b0
#define public_5822ba _public_5822ba
#define public_582314 _public_582314
#define public_582366 _public_582366
#define public_5823b2 _public_5823b2
#define public_5823e5 _public_5823e5
#define public_582449 _public_582449
#define public_58249b _public_58249b
#define public_5824bf _public_5824bf
#define public_5824e3 _public_5824e3
#define public_582516 _public_582516
#define public_582520 _public_582520
#define public_58257a _public_58257a
#define public_5825d5 _public_5825d5
#define public_582629 _public_582629
#define public_582678 _public_582678

PROC_DECLARE(0x582120, internal_582120, public_582120);
extern "C" NAKED register_t __cdecl internal_582120()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        xor ebx, ebx
        cmp ebp, ebx
        push edi
        mov esi, ecx
        je public_582189
        lea edi, ds:[esi+0x32C]
        mov ecx, edi
        call public_59eee0
        cmp byte ptr ss : [ebp], bl
        je public_58214c
        push ebx
        push ebx
        push ebp
        mov ecx, edi
        call public_59ec80
        public_58214c : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, 0xFFFFFFFF
        je public_58217f
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ebp, ds:[esi+0x360]
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_58217f : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x8C]
        public_582189 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx]
        lea ecx, ds:[esi+0x354]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call public_5803d0
        mov ecx, dword ptr ds : [esi+0x330]
        cmp ecx, 0xFFFFFFFF
        je public_5821e3
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x384]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x330]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_5821e3 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        cmp ebp, ebx
        je public_582235
        lea edi, ds:[esi+0x3A0]
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_582235
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_582235
        mov edx, dword ptr ds : [eax]
        push edi
        push ebp
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        public_582235 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        mov ebp, dword ptr ss : [esp+0x28]
        cmp ebp, ebx
        lea eax, ds:[esi+0x390]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dl, byte ptr ss : [esp+0x24]
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [esi+0x39C], dl
        je public_5822ba
        lea edi, ds:[esi+0x3D0]
        mov ecx, edi
        call public_59eee0
        cmp byte ptr ss : [ebp], bl
        je public_58227d
        push ebx
        push ebx
        push ebp
        mov ecx, edi
        call public_59ec80
        public_58227d : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, 0xFFFFFFFF
        je public_5822b0
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ebp, ds:[esi+0x404]
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_5822b0 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x8C]
        public_5822ba : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [edx]
        lea ecx, ds:[esi+0x3F8]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call public_5803d0
        mov ecx, dword ptr ds : [esi+0x3D4]
        cmp ecx, 0xFFFFFFFF
        je public_582314
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x428]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x3D4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_582314 : nop
        mov ebp, dword ptr ss : [esp+0x30]
        cmp ebp, ebx
        je public_582366
        lea edi, ds:[esi+0x444]
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_582366
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_582366
        mov edx, dword ptr ds : [eax]
        push edi
        push ebp
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        public_582366 : nop
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ecx]
        mov ebp, dword ptr ss : [esp+0x3C]
        cmp ebp, ebx
        lea eax, ds:[esi+0x434]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dl, byte ptr ss : [esp+0x38]
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [esi+0x440], dl
        je public_5824bf
        lea edi, ds:[esi+0x474]
        mov ecx, edi
        call public_59eee0
        cmp byte ptr ss : [ebp], bl
        je public_5823b2
        push ebx
        push ebx
        push ebp
        mov ecx, edi
        call public_59ec80
        public_5823b2 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, 0xFFFFFFFF
        je public_5823e5
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ebp, ds:[esi+0x4A8]
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_5823e5 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x8C]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edx]
        lea ecx, ds:[esi+0x49C]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call public_5803d0
        mov ecx, dword ptr ds : [esi+0x478]
        cmp ecx, 0xFFFFFFFF
        je public_582449
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x4CC]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x478]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_582449 : nop
        mov ebp, dword ptr ss : [esp+0x44]
        cmp ebp, ebx
        je public_58249b
        lea edi, ds:[esi+0x4E8]
        mov eax, 0x3F800000
        mov dword ptr ds : [edi+0x20], eax
        mov dword ptr ds : [edi+0x10], eax
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_58249b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_58249b
        mov edx, dword ptr ds : [eax]
        push edi
        push ebp
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        public_58249b : nop
        mov ecx, dword ptr ss : [esp+0x48]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x4D8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dl, byte ptr ss : [esp+0x4C]
        mov dword ptr ds : [eax+8], ecx
        mov byte ptr ds : [esi+0x4E4], dl
        public_5824bf : nop
        mov ebp, dword ptr ss : [esp+0x50]
        cmp ebp, ebx
        je public_582520
        lea edi, ds:[esi+0x518]
        mov ecx, edi
        call public_59eee0
        cmp byte ptr ss : [ebp], bl
        je public_5824e3
        push ebx
        push ebx
        push ebp
        mov ecx, edi
        call public_59ec80
        public_5824e3 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, 0xFFFFFFFF
        je public_582516
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea ebp, ds:[esi+0x5B8]
        push ebp
        push ecx
        push eax
        call dword ptr ds : [edx+0x9C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_582516 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x8C]
        public_582520 : nop
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ds : [edx]
        lea ecx, ds:[esi+0x5A0]
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, esi
        call public_5803d0
        mov ecx, dword ptr ds : [esi+0x51C]
        cmp ecx, 0xFFFFFFFF
        je public_58257a
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x5DC]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x51C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_58257a : nop
        mov ecx, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[esi+0x5AC]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov ecx, esi
        call public_5803d0
        mov ecx, dword ptr ds : [esi+0x51C]
        cmp ecx, 0xFFFFFFFF
        je public_5825d5
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x5DC]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x8C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x51C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        public_5825d5 : nop
        cmp dword ptr ss : [esp+0x5C], ebx
        mov ebp, 0x3F800000
        je public_582629
        lea edi, ds:[esi+0x5F8]
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x10], ebp
        mov dword ptr ds : [edi], ebp
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_582629
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        cmp eax, ebx
        je public_582629
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        public_582629 : nop
        cmp dword ptr ss : [esp+0x60], ebx
        je public_582678
        lea edi, ds:[esi+0x628]
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x10], ebp
        mov dword ptr ds : [edi], ebp
        mov dword ptr ds : [edi+0x1C], ebx
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x14], ebx
        mov dword ptr ds : [edi+0xC], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, ebx
        je public_582678
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+8]
        cmp eax, ebx
        je public_582678
        mov ecx, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x90]
        public_582678 : nop
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x5E8]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov cl, byte ptr ss : [esp+0x68]
        mov dword ptr ds : [edx+8], eax
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0x70]
        mov byte ptr ds : [esi+0x5F4], cl
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [esi+0x658], edx
        mov dl, byte ptr ss : [esp+0x78]
        mov dword ptr ds : [esi+0x65C], eax
        mov al, byte ptr ss : [esp+0x7C]
        pop edi
        mov dword ptr ds : [esi+0x660], ecx
        mov byte ptr ds : [esi+0x66C], dl
        mov byte ptr ds : [esi+0x2D1], al
        pop esi
        pop ebp
        pop ebx
        ret 0x6C
        UNREACHABLE_TRAP(0x582120)
    }
}

#undef public_58214c
#undef public_58217f
#undef public_582189
#undef public_5821e3
#undef public_582235
#undef public_58227d
#undef public_5822b0
#undef public_5822ba
#undef public_582314
#undef public_582366
#undef public_5823b2
#undef public_5823e5
#undef public_582449
#undef public_58249b
#undef public_5824bf
#undef public_5824e3
#undef public_582516
#undef public_582520
#undef public_58257a
#undef public_5825d5
#undef public_582629
#undef public_582678
