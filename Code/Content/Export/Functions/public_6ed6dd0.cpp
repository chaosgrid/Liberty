#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed6800);
CLANG_FORWARD_PROC_SYMBOL(public_6ed6dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb110);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb190);
CLANG_FORWARD_PROC_SYMBOL(public_6eeb210);
CLANG_FORWARD_PROC_SYMBOL(public_6eec250);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f73a40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab26b);

#define public_6ed6f0f _public_6ed6f0f
#define public_6ed6f6c _public_6ed6f6c
#define public_6ed7139 _public_6ed7139
#define public_6ed7147 _public_6ed7147
#define public_6ed7155 _public_6ed7155
#define public_6ed7222 _public_6ed7222
#define public_6ed7233 _public_6ed7233
#define public_6ed7244 _public_6ed7244
#define public_6ed7253 _public_6ed7253
#define public_6ed725b _public_6ed725b
#define public_6ed7278 _public_6ed7278
#define public_6ed727f _public_6ed727f

PROC_DECLARE(0x6ed6dd0, internal_6ed6dd0, public_6ed6dd0);
extern "C" NAKED register_t __cdecl internal_6ed6dd0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fab26b @0x6ed6dd2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab26b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x208
        mov eax, dword ptr ss : [esp+0x21C]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x22C]
        push edi
        lea edx, ss:[esp+0x23]
        mov dword ptr ds : [esi+8], ecx
        lea ebp, ds:[esi+0x14]
        lea ebx, ds:[esi+0xC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [esi+0x10], 0
        call public_6ead6a0
        mov edi, dword ptr ss : [esp+0x228]
        xor eax, eax
        mov dword ptr ds : [esi+0x24], edi
        mov dword ptr ds : [esi+0x28], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ss : [esp+0x220], eax
        lea eax, ss:[esp+0x22C]
        push ebx
        push eax
        mov dword ptr ds : [esi], offset public_6fb635c
        call dword ptr ds : [public_6fb3444]
        push ebx
        call public_6fa6e50
        add esp, 0xC
        test eax, eax
        je public_6ed7278
        push 0x80
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ed7278
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        mov ecx, edi
        call public_6f73930
        mov edx, dword ptr ds : [esi+8]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], eax
        call public_6f73a40
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ed727f
        mov ecx, ebp
        mov dword ptr ds : [esi+0x28], 0x4A42
        call public_6eb6b30
        cmp eax, 0xA
        jae public_6ed6f0f
        push 0x28
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
        lea edx, ds:[esi+0x28]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], esi
        public_6ed6f0f : nop
        mov ebx, dword ptr ds : [public_6fb3684]
/*FIXUP push offset public_6fb6348 @0x6ed6f15*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6348
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+8]
        lea edx, ss:[esp+0x38]
        push edx
        mov dword ptr ss : [esp+0x3C], 0
        mov byte ptr ss : [esp+0x40], 0
        call public_6eb6bb0
        push eax
        call public_6eeb190
        add esp, 8
        test eax, eax
        je public_6ed6f6c
/*FIXUP push offset public_6fb632c @0x6ed6f5e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb632c
        lea ecx, ss:[esp+0x3C]
        call public_6ead640
/*FIXUP public_6ed6f6c : nop
        push offset public_6fb6324 @0x6ed6f6c*/
  FIXUP public_6ed6f6c : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6324
        lea ecx, ss:[esp+0x3C]
        call public_6eec250
        lea eax, ss:[esp+0x84]
        mov ecx, 0x11
        lea esi, ss:[esp+0x38]
        lea edi, ss:[esp+0x80]
        push eax
        rep movsd
        call ebx
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
        lea ecx, ss:[esp+0x110]
        push 1
        push ecx
        call public_6eeb210
        lea edx, ss:[esp+0x94]
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x90]
        push edx
        rep movsd
        call ebx
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
        lea eax, ss:[esp+0x198]
        push 2
        push eax
        call public_6eeb210
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x90]
        rep movsd
        lea ecx, ss:[esp+0x94]
        push ecx
        call ebx
        add esp, 0x14
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6314 @0x6ed703b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6314
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x34]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x3C], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x14]
        push 0
        push eax
        lea ecx, ss:[esp+0x154]
        push 2
        push ecx
        call public_6eeb210
        mov ecx, 0x11
        mov esi, eax
        lea edx, ss:[esp+0x94]
        lea edi, ss:[esp+0x90]
        push edx
        rep movsd
        call ebx
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0x14
        mov dword ptr ss : [esp+0x10], eax
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb6308 @0x6ed70a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6308
        call ebx
        add esp, 4
        lea edx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [ecx+8]
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x40], 0
        mov byte ptr ss : [esp+0x44], 0
        call dword ptr ds : [public_6fb3428]
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 8
        test eax, eax
        jne public_6ed7139
        mov eax, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x30]
        add esp, 8
        test eax, 0xC40
        je public_6ed7155
        lea ecx, ss:[esp+0x7C]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call dword ptr ds : [public_6fb344c]
        mov edx, dword ptr ss : [esp+0x30]
        lea ecx, ss:[esp+0x44]
        push ecx
        push edx
        call dword ptr ds : [public_6fb3448]
        add esp, 0x14
        jmp public_6ed7147
        public_6ed7139 : nop
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call public_6eeb110
        add esp, 8
/*FIXUP public_6ed7147 : nop
        push offset public_6fb6064 @0x6ed7147*/
  FIXUP public_6ed7147 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x3C]
        call public_6eec250
        public_6ed7155 : nop
        lea edx, ss:[esp+0x84]
        mov ecx, 0x11
        lea esi, ss:[esp+0x38]
        lea edi, ss:[esp+0x80]
        push edx
        rep movsd
        call ebx
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb62f0 @0x6ed7188*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62f0
        lea ecx, ss:[esp+0xC8]
        mov dword ptr ss : [esp+0xC8], 0
        mov byte ptr ss : [esp+0xCC], 0
        call public_6ead640
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edx+0xC]
        mov eax, dword ptr ds : [eax]
        push eax
/*FIXUP push offset public_6fb62ec @0x6ed71b6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62ec
        lea ecx, ss:[esp+0xD0]
        push ecx
        lea edx, ss:[esp+0x1E0]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x94]
        mov ecx, 0x11
        lea edi, ss:[esp+0x90]
        push eax
        rep movsd
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x24], eax
        call public_6eb5770
        mov eax, dword ptr ss : [esp+0x234]
        dec eax
        cmp eax, 5
        mov dword ptr ss : [esp+0x38], 0
        mov byte ptr ss : [esp+0x3C], 0
        ja public_6ed725b
/*FIXUP jmp dword ptr ds : [eax*4+public_6ed729c] @0x6ed721b*/
  JMPTB cmp eax, 0
  JMPTB je public_6ed7222
  JMPTB cmp eax, 1
  JMPTB je public_6ed725b
  JMPTB cmp eax, 2
  JMPTB je public_6ed7233
  JMPTB cmp eax, 3
  JMPTB je public_6ed7233
  JMPTB cmp eax, 4
  JMPTB je public_6ed7233
  JMPTB cmp eax, 5
  JMPTB je public_6ed7244
  JMPTB int 3
/*FIXUP public_6ed7222 : nop
        push offset public_6fb6064 @0x6ed7222*/
  FIXUP public_6ed7222 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb62d0 @0x6ed7227*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62d0
        lea ecx, ss:[esp+0x40]
        push ecx
        jmp public_6ed7253
/*FIXUP public_6ed7233 : nop
        push offset public_6fb6064 @0x6ed7233*/
  FIXUP public_6ed7233 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb62b4 @0x6ed7238*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62b4
        lea edx, ss:[esp+0x40]
        push edx
        jmp public_6ed7253
/*FIXUP public_6ed7244 : nop
        push offset public_6fb6064 @0x6ed7244*/
  FIXUP public_6ed7244 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
/*FIXUP push offset public_6fb6298 @0x6ed7249*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6298
        lea eax, ss:[esp+0x40]
        push eax
        public_6ed7253 : nop
        call public_6eec2b0
        add esp, 0xC
        public_6ed725b : nop
        sub esp, 0x44
        mov edi, esp
        mov ecx, 0x11
        lea esi, ss:[esp+0x7C]
        rep movsd
        mov esi, dword ptr ss : [esp+0x5C]
        mov ecx, esi
        call public_6ed6800
        jmp public_6ed727f
        public_6ed7278 : nop
        mov dword ptr ds : [esi+0x24], 0
        public_6ed727f : nop
        mov ecx, dword ptr ss : [esp+0x218]
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x214
        ret 0x10
        UNREACHABLE_TRAP(0x6ed6dd0)
        ASM_EXPORT_ENTRY_FIRST(0x6ed7222, public_6ed7222)
        ASM_EXPORT_ENTRY(0x6ed7233, public_6ed7233)
        ASM_EXPORT_ENTRY(0x6ed7244, public_6ed7244)
        ASM_EXPORT_ENTRY_LAST(0x6ed725b, public_6ed725b)
    }
}

#undef public_6ed6f0f
#undef public_6ed6f6c
#undef public_6ed7139
#undef public_6ed7147
#undef public_6ed7155
#undef public_6ed7222
#undef public_6ed7233
#undef public_6ed7244
#undef public_6ed7253
#undef public_6ed725b
#undef public_6ed7278
#undef public_6ed727f

#pragma init_seg(compiler)
extern "C" void const* const public_6ed7222 = __AsmFindLabelExport(&internal_6ed6dd0, 0x6ed7222);
extern "C" void const* const public_6ed7233 = __AsmFindLabelExport(&internal_6ed6dd0, 0x6ed7233);
extern "C" void const* const public_6ed7244 = __AsmFindLabelExport(&internal_6ed6dd0, 0x6ed7244);
extern "C" void const* const public_6ed725b = __AsmFindLabelExport(&internal_6ed6dd0, 0x6ed725b);
