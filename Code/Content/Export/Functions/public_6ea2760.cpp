#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea2760);
CLANG_FORWARD_PROC_SYMBOL(public_6eb75a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb84c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f24280);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9000);
CLANG_FORWARD_JUMP_SYMBOL(public_6fa94aa);

#define public_6ea2873 _public_6ea2873
#define public_6ea2884 _public_6ea2884
#define public_6ea2899 _public_6ea2899
#define public_6ea28bf _public_6ea28bf
#define public_6ea28e4 _public_6ea28e4
#define public_6ea28ed _public_6ea28ed
#define public_6ea2941 _public_6ea2941
#define public_6ea294c _public_6ea294c
#define public_6ea295b _public_6ea295b
#define public_6ea2971 _public_6ea2971
#define public_6ea2991 _public_6ea2991
#define public_6ea299a _public_6ea299a

PROC_DECLARE(0x6ea2760, internal_6ea2760, public_6ea2760);
extern "C" NAKED register_t __cdecl internal_6ea2760()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fa94aa @0x6ea2768*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fa94aa
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1570
        mov dword ptr fs : [0], esp
        call public_6fa9000
        mov eax, dword ptr ss : [esp+0x1584]
        push ebx
        push esi
        push edi
        mov esi, ecx
        push eax
        lea ecx, ss:[esp+0x1590]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], esi
        call public_6eb75a0
        xor ebx, ebx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x1584], ebx
        mov dword ptr ds : [esi], offset public_6fb3ab8
        mov dword ptr ds : [esi+0x2B4], 7
        mov dword ptr ds : [esi+0x2B8], 8
        mov dword ptr ds : [esi+0x2C0], 0x56B8
        mov dword ptr ds : [esi+0x2C4], 0x7DC8
        call dword ptr ds : [public_6fb300c]
        lea edx, ss:[esp+0x14]
        push edx
/*FIXUP push offset public_6fb3aa0 @0x6ea27e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb3aa0
        mov byte ptr ss : [esp+0x158C], 1
        call public_6f24280
        add esp, 8
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6eb84c0
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_6fb3008]
        lea ecx, ss:[esp+0x143C]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ds : [public_6fb3304]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebx
        lea ecx, ss:[esp+0x1444]
        mov byte ptr ss : [esp+0x158C], 3
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        mov edi, dword ptr ds : [public_6fb32a8]
        je public_6ea2899
        cmp dword ptr ss : [esp+0x1450], ebx
        je public_6ea2884
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        je public_6ea2873
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x1454], ebx
        mov dword ptr ss : [esp+0x1458], ebx
        public_6ea2873 : nop
        mov ecx, dword ptr ss : [esp+0x1450]
        push ecx
        call edi
        mov dword ptr ss : [esp+0x1450], ebx
        public_6ea2884 : nop
        mov edx, dword ptr ss : [esp+0x144C]
        push edx
        call edi
        mov dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        public_6ea2899 : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3390]
        je public_6ea28bf
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x1458], ebx
        mov dword ptr ss : [esp+0x145C], ebx
        public_6ea28bf : nop
        mov eax, dword ptr ss : [esp+0x1444]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1460], ebx
        je public_6ea28ed
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea28e4
        cmp cl, 0xFF
        je public_6ea28e4
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea28ed
        public_6ea28e4 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea28ed : nop
        mov dword ptr ss : [esp+0x1444], ebx
        mov dword ptr ss : [esp+0x1448], ebx
        mov dword ptr ss : [esp+0x144C], ebx
        mov eax, dword ptr ds : [public_6fb3304]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x1590], 4
        call dword ptr ds : [public_6fb3308]
        cmp dword ptr ss : [esp+0x28], 0xFFFFFFFF
        je public_6ea295b
        cmp dword ptr ss : [esp+0x2C], ebx
        je public_6ea294c
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea2941
        push eax
        call dword ptr ds : [public_6fb32ac]
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea2941 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call edi
        mov dword ptr ss : [esp+0x2C], ebx
        public_6ea294c : nop
        mov eax, dword ptr ss : [esp+0x28]
        push eax
        call edi
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        public_6ea295b : nop
        mov eax, dword ptr ss : [esp+0x30]
        cmp eax, ebx
        je public_6ea2971
        push eax
        call ebp
        add esp, 4
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x34], ebx
        public_6ea2971 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, ebx
        mov dword ptr ss : [esp+0x38], ebx
        pop ebp
        je public_6ea299a
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6ea2991
        cmp cl, 0xFF
        je public_6ea2991
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6ea299a
        public_6ea2991 : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6ea299a : nop
        mov ecx, dword ptr ss : [esp+0x157C]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x157C
        ret 8
        UNREACHABLE_TRAP(0x6ea2760)
    }
}

#undef public_6ea2873
#undef public_6ea2884
#undef public_6ea2899
#undef public_6ea28bf
#undef public_6ea28e4
#undef public_6ea28ed
#undef public_6ea2941
#undef public_6ea294c
#undef public_6ea295b
#undef public_6ea2971
#undef public_6ea2991
#undef public_6ea299a
