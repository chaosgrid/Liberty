#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed6800);
CLANG_FORWARD_PROC_SYMBOL(public_6ed9330);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb110);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb190);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eec1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab2eb);

#define public_6ed9419 _public_6ed9419
#define public_6ed9466 _public_6ed9466
#define public_6ed949b _public_6ed949b
#define public_6ed9675 _public_6ed9675
#define public_6ed9683 _public_6ed9683
#define public_6ed9691 _public_6ed9691
#define public_6ed96e9 _public_6ed96e9
#define public_6ed96f0 _public_6ed96f0
#define public_6ed96f7 _public_6ed96f7
#define public_6ed96fc _public_6ed96fc
#define public_6ed9705 _public_6ed9705
#define public_6ed97a3 _public_6ed97a3
#define public_6ed97a6 _public_6ed97a6

PROC_DECLARE(0x6ed9330, internal_6ed9330, public_6ed9330);
extern "C" NAKED register_t __cdecl internal_6ed9330()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fab2eb @0x6ed9332*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab2eb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x248
        mov eax, dword ptr ss : [esp+0x25C]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x264]
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x1B]
        mov dword ptr ds : [ebx+8], ecx
        xor edi, edi
        lea ebp, ds:[ebx+0x14]
        lea esi, ds:[ebx+0xC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x78], ebx
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [ebx+0x10], edi
        call public_6ead6a0
        mov eax, dword ptr ss : [esp+0x268]
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x26C]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x268], edi
        mov dword ptr ds : [ebx], offset public_6fb66ec
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ed97a3
        push 0x40
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ed97a3
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x268]
        push edx
        call public_6f73930
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ed97a6
        mov dword ptr ds : [ebx+0x28], 0x4A41
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, edi
        je public_6ed9419
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 9
        jae public_6ed9466
        public_6ed9419 : nop
        push 0x24
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        lea edx, ds:[esi+0x24]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], esi
        public_6ed9466 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [ecx+8]
        lea edx, ss:[esp+0x30]
        push edx
        mov dword ptr ss : [esp+0x34], edi
        mov byte ptr ss : [esp+0x38], 0
        call public_6eb6bb0
        push eax
        call public_6eeb190
        add esp, 8
        test eax, eax
        je public_6ed949b
/*FIXUP push offset public_6fb632c @0x6ed948d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x34]
        call public_6ead640
/*FIXUP public_6ed949b : nop
        push offset public_6fb6324 @0x6ed949b*/
  FIXUP public_6ed949b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6324
        lea ecx, ss:[esp+0x34]
        call public_6eec250
        lea eax, ss:[esp+0x80]
        mov ecx, 0x11
        lea esi, ss:[esp+0x30]
        lea edi, ss:[esp+0x7C]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0x150]
        push 1
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x90]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x8C]
        push edx
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x14]
        push 0
        push edx
        lea eax, ss:[esp+0xC8]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x8C]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        lea ecx, ss:[esp+0x90]
        push ecx
        call esi
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6314 @0x6ed9575*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6314
        call esi
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x30], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0x1D8]
        push 3
        push ecx
        call public_6eeb210
        mov ecx, 0x11
        mov esi, eax
        lea edi, ss:[esp+0x8C]
        lea edx, ss:[esp+0x90]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push edx
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6348 @0x6ed95e0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call esi
        add esp, 4
        lea edx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
        mov ecx, dword ptr ds : [ebx+4]
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x38], 0
        mov byte ptr ss : [esp+0x3C], 0
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        test eax, eax
        jne public_6ed9675
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edx
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x34]
        add esp, 8
        test eax, 0xC40
        je public_6ed9691
        lea eax, ss:[esp+0x78]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        call dword ptr ds : [public_6fb344c]
        mov ecx, dword ptr ss : [esp+0x30]
        lea eax, ss:[esp+0x3C]
        push eax
        push ecx
        call dword ptr ds : [public_6fb3448]
        add esp, 0x14
        jmp public_6ed9683
        public_6ed9675 : nop
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call public_6eeb110
        add esp, 8
/*FIXUP public_6ed9683 : nop
        push offset public_6fb6064 @0x6ed9683*/
  FIXUP public_6ed9683 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x34]
        call public_6eec250
        public_6ed9691 : nop
        lea eax, ss:[esp+0x80]
        mov ecx, 0x11
        lea esi, ss:[esp+0x30]
        lea edi, ss:[esp+0x7C]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x274]
        mov esi, dword ptr ds : [ebx+0xC]
        dec eax
        cmp eax, 5
        mov dword ptr ss : [esp+0x30], 0
        mov byte ptr ss : [esp+0x34], 0
        ja public_6ed9705
/*FIXUP jmp dword ptr ds : [eax*4+public_6ed97c4] @0x6ed96e2*/
  JMPTB cmp eax, 0
  JMPTB je public_6ed96e9
  JMPTB cmp eax, 1
  JMPTB je public_6ed9705
  JMPTB cmp eax, 2
  JMPTB je public_6ed96f0
  JMPTB cmp eax, 3
  JMPTB je public_6ed96f0
  JMPTB cmp eax, 4
  JMPTB je public_6ed96f0
  JMPTB cmp eax, 5
  JMPTB je public_6ed96f7
  JMPTB int 3
/*FIXUP public_6ed96e9 : nop
        push offset public_6fb66d0 @0x6ed96e9*/
  FIXUP public_6ed96e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb66d0
        jmp public_6ed96fc
/*FIXUP public_6ed96f0 : nop
        push offset public_6fb66b4 @0x6ed96f0*/
  FIXUP public_6ed96f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb66b4
        jmp public_6ed96fc
/*FIXUP public_6ed96f7 : nop
        push offset public_6fb6698 @0x6ed96f7*/
  FIXUP public_6ed96f7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6698
        public_6ed96fc : nop
        lea ecx, ss:[esp+0x34]
        call public_6ead640
        public_6ed9705 : nop
        push esi
/*FIXUP push offset public_6fb6064 @0x6ed9706*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea edx, ss:[esp+0x110]
        push edx
        call public_6eeaf10
        add esp, 0x10
        add eax, 4
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6ead640
        lea eax, ss:[esp+0x80]
        mov ecx, 0x11
        lea esi, ss:[esp+0x30]
        lea edi, ss:[esp+0x7C]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        call public_6eb5770
/*FIXUP push offset public_6fb6684 @0x6ed9761*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6684
        lea ecx, ss:[esp+0x190]
        call public_6eec1f0
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6ed9776*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        add eax, 4
        push eax
        lea edx, ss:[esp+0x220]
        push edx
        call public_6eeaf10
        sub esp, 0x34
        mov esi, eax
        mov edi, esp
        mov ecx, 0x11
        rep movsd
        mov ecx, ebx
        call public_6ed6800
        jmp public_6ed97a6
        public_6ed97a3 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ed97a6 : nop
        mov ecx, dword ptr ss : [esp+0x258]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x254
        ret 0x10
        UNREACHABLE_TRAP(0x6ed9330)
        ASM_EXPORT_ENTRY_FIRST(0x6ed96e9, public_6ed96e9)
        ASM_EXPORT_ENTRY(0x6ed96f0, public_6ed96f0)
        ASM_EXPORT_ENTRY(0x6ed96f7, public_6ed96f7)
        ASM_EXPORT_ENTRY_LAST(0x6ed9705, public_6ed9705)
    }
}

#undef public_6ed9419
#undef public_6ed9466
#undef public_6ed949b
#undef public_6ed9675
#undef public_6ed9683
#undef public_6ed9691
#undef public_6ed96e9
#undef public_6ed96f0
#undef public_6ed96f7
#undef public_6ed96fc
#undef public_6ed9705
#undef public_6ed97a3
#undef public_6ed97a6

#pragma init_seg(compiler)
extern "C" void const* const public_6ed96e9 = __AsmFindLabelExport(&internal_6ed9330, 0x6ed96e9);
extern "C" void const* const public_6ed96f0 = __AsmFindLabelExport(&internal_6ed9330, 0x6ed96f0);
extern "C" void const* const public_6ed96f7 = __AsmFindLabelExport(&internal_6ed9330, 0x6ed96f7);
extern "C" void const* const public_6ed9705 = __AsmFindLabelExport(&internal_6ed9330, 0x6ed9705);
