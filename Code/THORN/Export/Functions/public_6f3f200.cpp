#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3f200);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);
CLANG_FORWARD_PROC_SYMBOL(public_6f58e80);

#define public_6f3f23b _public_6f3f23b
#define public_6f3f24b _public_6f3f24b
#define public_6f3f259 _public_6f3f259
#define public_6f3f268 _public_6f3f268
#define public_6f3f27a _public_6f3f27a
#define public_6f3f280 _public_6f3f280
#define public_6f3f28d _public_6f3f28d
#define public_6f3f2a9 _public_6f3f2a9
#define public_6f3f2c6 _public_6f3f2c6
#define public_6f3f2cf _public_6f3f2cf
#define public_6f3f2ea _public_6f3f2ea

PROC_DECLARE(0x6f3f200, internal_6f3f200, public_6f3f200);
extern "C" NAKED register_t __cdecl internal_6f3f200()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        push 0xFFFFFFFF
/*FIXUP push offset _public_6f58e80 @0x6f3f205*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6f58e80
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        mov eax, dword ptr ss : [ebp+8]
        push ebx
        push esi
        mov esi, eax
        or esi, 0x1F
        cmp esi, 0xFFFFFFFD
        push edi
        mov ebx, ecx
        mov dword ptr ss : [ebp-0x10], esp
        mov dword ptr ss : [ebp-0x18], ebx
        mov dword ptr ss : [ebp-0x14], esi
        jbe public_6f3f23b
        mov dword ptr ss : [ebp-0x14], eax
        mov esi, eax
        public_6f3f23b : nop
        lea eax, ds:[esi+2]
        test eax, eax
        mov dword ptr ss : [ebp-4], 0
        jge public_6f3f24b
        xor eax, eax
        public_6f3f24b : nop
        push eax
        call public_6f57e9c
        add esp, 4
        mov dword ptr ss : [ebp+8], eax
        jmp public_6f3f280
        public_6f3f259 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x14], eax
        add eax, 2
        test eax, eax
        jge public_6f3f268
        xor eax, eax
        public_6f3f268 : nop
        push eax
        call public_6f57e9c
        mov dword ptr ss : [ebp+8], eax
        add esp, 4
/*FIXUP mov eax, offset public_6f3f27a @0x6f3f274*/
  FIXUP lea eax, ds : [public_6f3f27a]
        ret 
        public_6f3f27a : nop
        mov ebx, dword ptr ss : [ebp-0x18]
        mov esi, dword ptr ss : [ebp-0x14]
        public_6f3f280 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jbe public_6f3f2a9
        cmp eax, esi
        jbe public_6f3f28d
        mov eax, esi
        public_6f3f28d : nop
        mov esi, dword ptr ds : [ebx+4]
        mov ecx, eax
        mov eax, dword ptr ss : [ebp+8]
        mov edx, ecx
        shr ecx, 2
        lea edi, ds:[eax+1]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov esi, dword ptr ss : [ebp-0x14]
        public_6f3f2a9 : nop
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        mov edi, dword ptr ds : [ebx+8]
        je public_6f3f2cf
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_6f3f2c6
        cmp cl, 0xFF
        je public_6f3f2c6
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6f3f2cf
        public_6f3f2c6 : nop
        push eax
        call public_6f57e26
        add esp, 4
        public_6f3f2cf : nop
        mov eax, dword ptr ss : [ebp+8]
        inc eax
        cmp edi, esi
        mov dword ptr ds : [ebx+8], 0
        mov dword ptr ds : [ebx+4], eax
        mov byte ptr ds : [eax-1], 0
        mov dword ptr ds : [ebx+0xC], esi
        ja public_6f3f2ea
        mov esi, edi
        public_6f3f2ea : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx+8], esi
        mov byte ptr ds : [esi+ecx], 0
        mov ecx, dword ptr ss : [ebp-0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        pop ebx
        mov esp, ebp
        pop ebp
        ret 4
        UNREACHABLE_TRAP(0x6f3f200)
        ASM_EXPORT_ENTRY_FIRST(0x6f3f259, public_6f3f259)
        ASM_EXPORT_ENTRY_LAST(0x6f3f27a, public_6f3f27a)
    }
}

#undef public_6f3f23b
#undef public_6f3f24b
#undef public_6f3f259
#undef public_6f3f268
#undef public_6f3f27a
#undef public_6f3f280
#undef public_6f3f28d
#undef public_6f3f2a9
#undef public_6f3f2c6
#undef public_6f3f2cf
#undef public_6f3f2ea

#pragma init_seg(compiler)
extern "C" void const* const public_6f3f259 = __AsmFindLabelExport(&internal_6f3f200, 0x6f3f259);
extern "C" void const* const public_6f3f27a = __AsmFindLabelExport(&internal_6f3f200, 0x6f3f27a);
