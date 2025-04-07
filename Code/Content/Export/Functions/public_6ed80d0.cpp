#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6ea9f40);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6ed80d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab2cb);

#define public_6ed81aa _public_6ed81aa
#define public_6ed81f7 _public_6ed81f7
#define public_6ed82aa _public_6ed82aa
#define public_6ed82bb _public_6ed82bb
#define public_6ed82cc _public_6ed82cc
#define public_6ed82db _public_6ed82db
#define public_6ed82e3 _public_6ed82e3
#define public_6ed840a _public_6ed840a
#define public_6ed840c _public_6ed840c
#define public_6ed840f _public_6ed840f

PROC_DECLARE(0x6ed80d0, internal_6ed80d0, public_6ed80d0);
extern "C" NAKED register_t __cdecl internal_6ed80d0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push 0xFFFFFFFF
/*FIXUP push public_6fab2cb @0x6ed80d2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab2cb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x230
        mov eax, dword ptr ss : [esp+0x244]
        mov dl, byte ptr ss : [esp+7]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x24C]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x24C]
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x254]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x250], edi
        mov dword ptr ds : [ebx], offset public_6fb6504
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6ed840c
        push 0x40
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ed840a
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ed840f
        mov dword ptr ds : [ebx+0x28], 0x4A3D
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6ed81aa
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 5
        jae public_6ed81f7
        public_6ed81aa : nop
        push 0x14
        call public_6fa912a
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        mov edi, eax
        mov eax, dword ptr ss : [ebp+4]
        push edi
        push edx
        push eax
        mov ecx, ebp
        call public_6eed270
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        push ecx
        push edx
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[edi+0x14]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[edi+eax*4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], edi
/*FIXUP public_6ed81f7 : nop
        push offset public_6fb6444 @0x6ed81f7*/
  FIXUP public_6ed81f7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6444
        lea ecx, ss:[esp+0x134]
        mov dword ptr ss : [esp+0x134], 0
        mov byte ptr ss : [esp+0x138], 0
        call public_6ead640
        mov eax, dword ptr ds : [esi]
        push eax
/*FIXUP push offset public_6fb6064 @0x6ed821e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x13C]
        push ecx
        lea edx, ss:[esp+0x180]
        push edx
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x30]
        lea eax, ss:[esp+0x34]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push eax
        call esi
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
/*FIXUP push offset public_6fb6424 @0x6ed8269*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6424
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
        mov edx, dword ptr ss : [esp+0x25C]
        lea eax, ds:[edx-1]
        cmp eax, 5
        mov dword ptr ss : [esp+0x20], 0
        mov byte ptr ss : [esp+0x24], 0
        ja public_6ed82e3
/*FIXUP jmp dword ptr ds : [eax*4+public_6ed842c] @0x6ed82a3*/
  JMPTB cmp eax, 0
  JMPTB je public_6ed82aa
  JMPTB cmp eax, 1
  JMPTB je public_6ed82e3
  JMPTB cmp eax, 2
  JMPTB je public_6ed82bb
  JMPTB cmp eax, 3
  JMPTB je public_6ed82bb
  JMPTB cmp eax, 4
  JMPTB je public_6ed82bb
  JMPTB cmp eax, 5
  JMPTB je public_6ed82cc
  JMPTB int 3
/*FIXUP public_6ed82aa : nop
        push offset public_6fb572c @0x6ed82aa*/
  FIXUP public_6ed82aa : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
/*FIXUP push offset public_6fb62d0 @0x6ed82af*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62d0
        lea eax, ss:[esp+0x28]
        push eax
        jmp public_6ed82db
/*FIXUP public_6ed82bb : nop
        push offset public_6fb572c @0x6ed82bb*/
  FIXUP public_6ed82bb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
/*FIXUP push offset public_6fb62b4 @0x6ed82c0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb62b4
        lea ecx, ss:[esp+0x28]
        push ecx
        jmp public_6ed82db
/*FIXUP public_6ed82cc : nop
        push offset public_6fb572c @0x6ed82cc*/
  FIXUP public_6ed82cc : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
/*FIXUP push offset public_6fb6298 @0x6ed82d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6298
        lea edx, ss:[esp+0x28]
        push edx
        public_6ed82db : nop
        call public_6eec2b0
        add esp, 0xC
        public_6ed82e3 : nop
        lea eax, ss:[esp+0x68]
        mov ecx, 0x11
        lea esi, ss:[esp+0x20]
        lea edi, ss:[esp+0x64]
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
/*FIXUP push offset public_6fb64ec @0x6ed8314*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb64ec
        lea ecx, ss:[esp+0xF0]
        mov dword ptr ss : [esp+0xF0], 0
        mov byte ptr ss : [esp+0xF4], 0
        call public_6ead640
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
/*FIXUP push offset public_6fb6064 @0x6ed833c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0xF8]
        push ecx
        lea edx, ss:[esp+0x1C4]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x78]
        mov ecx, 0x11
        lea edi, ss:[esp+0x74]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6eb5770
/*FIXUP push offset public_6fb64d4 @0x6ed8385*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb64d4
        lea eax, ss:[esp+0xB0]
        push 0x40
        push eax
        mov dword ptr ss : [esp+0xB4], 0
        mov byte ptr ss : [esp+0xB8], 0
        call public_6ea9f40
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6ed83b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0xC0]
        mov dword ptr ss : [esp+0xBC], eax
        push edx
        lea eax, ss:[esp+0x214]
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0x80]
        rep movsd
        lea ecx, ss:[esp+0x84]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x20
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push 1
        push eax
        mov ecx, ebp
        call public_6f937c0
        jmp public_6ed840f
        public_6ed840a : nop
        xor edi, edi
        public_6ed840c : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ed840f : nop
        mov ecx, dword ptr ss : [esp+0x240]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x23C
        ret 0x10
        UNREACHABLE_TRAP(0x6ed80d0)
        ASM_EXPORT_ENTRY_FIRST(0x6ed82aa, public_6ed82aa)
        ASM_EXPORT_ENTRY(0x6ed82bb, public_6ed82bb)
        ASM_EXPORT_ENTRY(0x6ed82cc, public_6ed82cc)
        ASM_EXPORT_ENTRY_LAST(0x6ed82e3, public_6ed82e3)
    }
}

#undef public_6ed81aa
#undef public_6ed81f7
#undef public_6ed82aa
#undef public_6ed82bb
#undef public_6ed82cc
#undef public_6ed82db
#undef public_6ed82e3
#undef public_6ed840a
#undef public_6ed840c
#undef public_6ed840f

#pragma init_seg(compiler)
extern "C" void const* const public_6ed82aa = __AsmFindLabelExport(&internal_6ed80d0, 0x6ed82aa);
extern "C" void const* const public_6ed82bb = __AsmFindLabelExport(&internal_6ed80d0, 0x6ed82bb);
extern "C" void const* const public_6ed82cc = __AsmFindLabelExport(&internal_6ed80d0, 0x6ed82cc);
extern "C" void const* const public_6ed82e3 = __AsmFindLabelExport(&internal_6ed80d0, 0x6ed82e3);
