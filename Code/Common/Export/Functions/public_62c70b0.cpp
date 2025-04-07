#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4ba0);
CLANG_FORWARD_PROC_SYMBOL(public_62eb910);
CLANG_FORWARD_PROC_SYMBOL(public_62ecaf0);

#define public_62c7103 _public_62c7103
#define public_62c7125 _public_62c7125
#define public_62c7132 _public_62c7132
#define public_62c7176 _public_62c7176
#define public_62c7178 _public_62c7178
#define public_62c71f2 _public_62c71f2
#define public_62c720a _public_62c720a
#define public_62c720e _public_62c720e
#define public_62c7216 _public_62c7216
#define public_62c721e _public_62c721e
#define public_62c7226 _public_62c7226
#define public_62c722e _public_62c722e
#define public_62c7236 _public_62c7236
#define public_62c723c _public_62c723c
#define public_62c7252 _public_62c7252
#define public_62c7274 _public_62c7274
#define public_62c7278 _public_62c7278
#define public_62c727c _public_62c727c
#define public_62c727e _public_62c727e
#define public_62c729a _public_62c729a

PROC_DECLARE(0x62c70b0, internal_62c70b0, public_62c70b0);
extern "C" NAKED register_t __cdecl internal_62c70b0()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0x20
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        mov byte ptr ds : [esi+0x38], 0
        mov cl, byte ptr ds : [eax+0x1950]
        test cl, cl
        mov ebp, 2
        mov dword ptr ss : [esp+0x1C], ebp
        je public_62c7103
        lea ecx, ds:[eax+0x1364]
        call public_62ecaf0
        test eax, eax
        je public_62c7103
        push eax
        call public_62d4ba0
        mov ecx, dword ptr ds : [eax+0xC0]
        add esp, 4
        cmp ecx, 4
        jne public_62c7103
        mov byte ptr ds : [esi+0x38], 1
        mov byte ptr ds : [esi+0x2C], 1
        mov dword ptr ds : [esi+0x30], 1
        public_62c7103 : nop
        mov al, byte ptr ds : [esi+0x2C]
        test al, al
        je public_62c7132
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62c7125
        mov dword ptr ds : [esi+0xC], 3
        pop esi
        mov eax, 3
        pop ebp
        add esp, 0x20
        ret 4
        public_62c7125 : nop
        xor eax, eax
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebp
        add esp, 0x20
        ret 4
        public_62c7132 : nop
        mov eax, dword ptr ds : [esi+0x20]
        mov ecx, dword ptr ds : [eax+0x17C]
        mov dword ptr ds : [esi+0x3C], ecx
        mov edx, dword ptr ds : [eax+0x190]
        mov dword ptr ds : [esi+0x40], edx
        mov eax, dword ptr ds : [eax+0x19C]
        mov dword ptr ds : [esi+0x44], eax
        mov eax, dword ptr ds : [esi+0x24]
        add eax, 8
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        mov byte ptr ss : [esp+0xB], 0
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62c7176
        lea ecx, ds:[eax-8]
        jmp public_62c7178
        public_62c7176 : nop
        xor ecx, ecx
        public_62c7178 : nop
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0xF]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        call dword ptr ds : [edx+0x44]
        mov eax, dword ptr ds : [esi+0x24]
        lea ecx, ss:[esp+0x24]
        push ecx
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x3C]
        mov eax, dword ptr ds : [esi+0x24]
        lea ecx, ss:[esp+0x1C]
        push ecx
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x3C]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x24]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x14]
        fdivp 
        fcomp dword ptr ds : [ecx+0x194C]
        fnstsw ax
        test ah, 5
        jp public_62c720a
        mov bl, 1
        mov dword ptr ds : [esi+0x30], ebp
        public_62c71f2 : nop
        mov eax, dword ptr ds : [ecx+0x1948]
        fld dword ptr ds : [ecx+0x1438]
        cmp eax, 4
        ja public_62c7236
/*FIXUP jmp dword ptr ds : [eax*4+public_62c72a8] @0x62c7203*/
  JMPTB cmp eax, 0
  JMPTB je public_62c720e
  JMPTB cmp eax, 1
  JMPTB je public_62c7216
  JMPTB cmp eax, 2
  JMPTB je public_62c721e
  JMPTB cmp eax, 3
  JMPTB je public_62c7226
  JMPTB cmp eax, 4
  JMPTB je public_62c722e
  JMPTB int 3
        public_62c720a : nop
        xor bl, bl
        jmp public_62c71f2
        public_62c720e : nop
        fld dword ptr ds : [public_639e0e0]
        jmp public_62c723c
        public_62c7216 : nop
        fld dword ptr ds : [public_639e0dc]
        jmp public_62c723c
        public_62c721e : nop
        fld dword ptr ds : [public_639e0d8]
        jmp public_62c723c
        public_62c7226 : nop
        fld dword ptr ds : [public_639e0d4]
        jmp public_62c723c
        public_62c722e : nop
        fld dword ptr ds : [public_639a1d0]
        jmp public_62c723c
        public_62c7236 : nop
        fld dword ptr ds : [public_639c13c]
        public_62c723c : nop
        fxch 
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62c7252
        mov bl, 1
        mov dword ptr ds : [esi+0x30], 0
        public_62c7252 : nop
        mov al, byte ptr ds : [ecx+0x1951]
        test al, al
        je public_62c7278
        add ecx, 0x12C
        call public_62eb910
        test al, al
        jne public_62c7274
        mov dword ptr ds : [esi+0x30], 3
        jmp public_62c727c
        public_62c7274 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        public_62c7278 : nop
        test bl, bl
        je public_62c727e
        public_62c727c : nop
        xor ebp, ebp
        public_62c727e : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        pop ebx
        je public_62c729a
        mov dword ptr ds : [esi+0xC], 3
        pop esi
        mov eax, 3
        pop ebp
        add esp, 0x20
        ret 4
        public_62c729a : nop
        mov dword ptr ds : [esi+0xC], ebp
        pop esi
        mov eax, ebp
        pop ebp
        add esp, 0x20
        ret 4
        UNREACHABLE_TRAP(0x62c70b0)
        ASM_EXPORT_ENTRY_FIRST(0x62c720e, public_62c720e)
        ASM_EXPORT_ENTRY(0x62c7216, public_62c7216)
        ASM_EXPORT_ENTRY(0x62c721e, public_62c721e)
        ASM_EXPORT_ENTRY(0x62c7226, public_62c7226)
        ASM_EXPORT_ENTRY_LAST(0x62c722e, public_62c722e)
    }
}

#undef public_62c7103
#undef public_62c7125
#undef public_62c7132
#undef public_62c7176
#undef public_62c7178
#undef public_62c71f2
#undef public_62c720a
#undef public_62c720e
#undef public_62c7216
#undef public_62c721e
#undef public_62c7226
#undef public_62c722e
#undef public_62c7236
#undef public_62c723c
#undef public_62c7252
#undef public_62c7274
#undef public_62c7278
#undef public_62c727c
#undef public_62c727e
#undef public_62c729a

#pragma init_seg(compiler)
extern "C" void const* const public_62c720e = __AsmFindLabelExport(&internal_62c70b0, 0x62c720e);
extern "C" void const* const public_62c7216 = __AsmFindLabelExport(&internal_62c70b0, 0x62c7216);
extern "C" void const* const public_62c721e = __AsmFindLabelExport(&internal_62c70b0, 0x62c721e);
extern "C" void const* const public_62c7226 = __AsmFindLabelExport(&internal_62c70b0, 0x62c7226);
extern "C" void const* const public_62c722e = __AsmFindLabelExport(&internal_62c70b0, 0x62c722e);
