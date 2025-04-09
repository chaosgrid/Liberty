#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43d2a0);
CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e120);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);
CLANG_FORWARD_PROC_SYMBOL(public_5762f0);
CLANG_FORWARD_PROC_SYMBOL(public_576360);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);
CLANG_FORWARD_PROC_SYMBOL(public_59db20);
CLANG_FORWARD_PROC_SYMBOL(public_59dd00);

#define public_45d240 _public_45d240
#define public_45d252 _public_45d252
#define public_45d269 _public_45d269
#define public_45d284 _public_45d284
#define public_45d2eb _public_45d2eb
#define public_45d302 _public_45d302
#define public_45d313 _public_45d313
#define public_45d325 _public_45d325
#define public_45d33c _public_45d33c
#define public_45d358 _public_45d358
#define public_45d35f _public_45d35f
#define public_45d366 _public_45d366
#define public_45d36d _public_45d36d
#define public_45d374 _public_45d374
#define public_45d37b _public_45d37b
#define public_45d382 _public_45d382
#define public_45d387 _public_45d387
#define public_45d3b0 _public_45d3b0
#define public_45d3ca _public_45d3ca
#define public_45d3cc _public_45d3cc
#define public_45d3db _public_45d3db
#define public_45d3e9 _public_45d3e9
#define public_45d40b _public_45d40b
#define public_45d418 _public_45d418
#define public_45d444 _public_45d444
#define public_45d44b _public_45d44b
#define public_45d452 _public_45d452
#define public_45d459 _public_45d459
#define public_45d460 _public_45d460
#define public_45d467 _public_45d467
#define public_45d46e _public_45d46e
#define public_45d470 _public_45d470
#define public_45d4d0 _public_45d4d0
#define public_45d4ea _public_45d4ea
#define public_45d4ec _public_45d4ec
#define public_45d4fb _public_45d4fb
#define public_45d501 _public_45d501

PROC_DECLARE(0x45d210, internal_45d210, public_45d210);
extern "C" NAKED register_t __cdecl internal_45d210()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x1BC]
        xor ebx, ebx
        cmp eax, ebx
        push edi
        je public_45d2eb
        mov ebp, dword ptr ds : [esi+0x1B8]
        cmp ebp, ebx
        je public_45d269
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_45d252
        lea ebx, ds:[ebx]
        public_45d240 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_45d240
        public_45d252 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [eax+0x28]
        mov edx, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [edx]
        mov dword ptr ds : [esi+0x1B8], ebx
        public_45d269 : nop
        lea edi, ds:[esi-0x20]
        mov ecx, edi
        call public_55e280
        test al, al
        jne public_45d284
        mov eax, dword ptr ds : [public_5cea10]
        push eax
        mov ecx, edi
        call public_55e120
        public_45d284 : nop
        mov ecx, dword ptr ds : [esi+0x1BC]
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x14]
        mov eax, dword ptr ds : [esi+0x1BC]
        lea ecx, ds:[eax+0x2D4]
        push ecx
        lea edx, ds:[esi+0x1C8]
        push edx
        push eax
        mov ecx, edi
        call public_55dee0
        mov ecx, dword ptr ds : [esi+0x1C4]
        mov eax, dword ptr ds : [esi+0x1BC]
        mov dword ptr ds : [eax+0xCC], ecx
        push ebx
        lea ecx, ds:[esi-0x24]
        call public_5762f0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_45d2eb : nop
        cmp dword ptr ds : [esi+0x58], ebx
        je public_45d501
        cmp dword ptr ds : [esi+0x5C], 0x66
        jne public_45d302
        cmp byte ptr ds : [esi+0x1DC], bl
        je public_45d33c
        public_45d302 : nop
        mov ebp, dword ptr ds : [esi+0x1B8]
        cmp ebp, ebx
        je public_45d33c
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, ebx
        je public_45d325
        public_45d313 : nop
        mov edi, dword ptr ds : [eax+8]
        push eax
        call public_43d2a0
        add esp, 4
        cmp edi, ebx
        mov eax, edi
        jne public_45d313
        public_45d325 : nop
        mov edx, dword ptr ss : [ebp]
        mov ecx, ebp
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ss : [ebp]
        push 1
        mov ecx, ebp
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x1B8], ebx
        public_45d33c : nop
        mov eax, dword ptr ds : [esi+0x5C]
        add eax, 0xFFFFFF9D
        cmp eax, 7
        mov byte ptr ds : [esi+0x1DC], bl
        ja public_45d501
/*FIXUP jmp dword ptr ds : [eax*4+public_45d50c] @0x45d351*/
  JMPTB cmp eax, 0
  JMPTB je public_45d358
  JMPTB cmp eax, 1
  JMPTB je public_45d501
  JMPTB cmp eax, 2
  JMPTB je public_45d36d
  JMPTB cmp eax, 3
  JMPTB je public_45d35f
  JMPTB cmp eax, 4
  JMPTB je public_45d366
  JMPTB cmp eax, 5
  JMPTB je public_45d37b
  JMPTB cmp eax, 6
  JMPTB je public_45d382
  JMPTB cmp eax, 7
  JMPTB je public_45d374
  JMPTB int 3
        public_45d358 : nop
        mov ebp, offset public_5cb130
        jmp public_45d387
        public_45d35f : nop
        mov ebp, offset public_5caf68
        jmp public_45d387
        public_45d366 : nop
        mov ebp, offset public_5cedc4
        jmp public_45d387
        public_45d36d : nop
        mov ebp, offset public_5cedb4
        jmp public_45d387
        public_45d374 : nop
        mov ebp, offset public_5cedac
        jmp public_45d387
        public_45d37b : nop
        mov ebp, offset public_5ceda0
        jmp public_45d387
        public_45d382 : nop
        mov ebp, offset public_5ced90
        public_45d387 : nop
        cmp byte ptr ds : [esi+0x1DF], bl
        jne public_45d3e9
        cmp byte ptr ds : [public_67dcc8], bl
        je public_45d3e9
        mov eax, dword ptr ds : [esi+0x58]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov dword ptr ds : [esi+0x58], ebx
        lea edi, ds:[esi+0x84]
        mov ebp, 7
        lea esp, ss:[esp]
        public_45d3b0 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebx
        je public_45d3db
        mov eax, dword ptr ds : [edi-0x1C]
        cmp eax, dword ptr ds : [esi+0x58]
        je public_45d3ca
        cmp eax, dword ptr ds : [esi+0x1BC]
        je public_45d3ca
        xor al, al
        jmp public_45d3cc
        public_45d3ca : nop
        mov al, 1
        public_45d3cc : nop
        mov edx, dword ptr ds : [ecx]
        movzx eax, al
        push ebx
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        public_45d3db : nop
        add edi, 4
        dec ebp
        jne public_45d3b0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_45d3e9 : nop
        push ebp
        call public_59da10
        mov edi, eax
        add esp, 4
        cmp edi, ebx
        jne public_45d40b
        mov ecx, dword ptr ds : [esi+0x58]
        push ebx
        push ecx
        push ebp
        push ebp
        call public_59db20
        add esp, 0x10
        mov edi, eax
        jmp public_45d418
        public_45d40b : nop
        mov edx, dword ptr ds : [esi+0x58]
        push edx
        push edi
        call public_59dd00
        add esp, 8
        public_45d418 : nop
        cmp edi, ebx
        mov eax, dword ptr ds : [esi+0x58]
        mov ecx, dword ptr ds : [eax+0xCC]
        mov dword ptr ds : [esi+0x60], ecx
        mov dword ptr ds : [eax+0xCC], ebx
        je public_45d501
        mov eax, dword ptr ds : [esi+0x5C]
        add eax, 0xFFFFFF9D
        cmp eax, 7
        ja public_45d46e
/*FIXUP jmp dword ptr ds : [eax*4+public_45d52c] @0x45d43d*/
  JMPTB cmp eax, 0
  JMPTB je public_45d46e
  JMPTB cmp eax, 1
  JMPTB je public_45d46e
  JMPTB cmp eax, 2
  JMPTB je public_45d452
  JMPTB cmp eax, 3
  JMPTB je public_45d444
  JMPTB cmp eax, 4
  JMPTB je public_45d44b
  JMPTB cmp eax, 5
  JMPTB je public_45d460
  JMPTB cmp eax, 6
  JMPTB je public_45d467
  JMPTB cmp eax, 7
  JMPTB je public_45d459
  JMPTB int 3
        public_45d444 : nop
        mov eax, 1
        jmp public_45d470
        public_45d44b : nop
        mov eax, 2
        jmp public_45d470
        public_45d452 : nop
        mov eax, 3
        jmp public_45d470
        public_45d459 : nop
        mov eax, 4
        jmp public_45d470
        public_45d460 : nop
        mov eax, 5
        jmp public_45d470
        public_45d467 : nop
        mov eax, 6
        jmp public_45d470
        public_45d46e : nop
        xor eax, eax
        public_45d470 : nop
        lea edx, ds:[eax+eax*2]
        lea eax, ds:[esi+edx*4+0xF4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x10], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x18], eax
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x10]
        push eax
        call dword ptr ds : [edx+0x14]
        mov edx, dword ptr ds : [edi]
        push ebx
        push ebx
        push 0xEF01
        mov ecx, edi
        call dword ptr ds : [edx+0x5C]
        mov al, byte ptr ds : [edi+0x6C]
        or al, 3
        push 2
        mov byte ptr ds : [edi+0x6C], al
        call public_5645c0
        add esp, 4
        push ebx
        lea ecx, ds:[esi-0x24]
        call public_576360
        lea edi, ds:[esi+0x84]
        mov ebp, 7
        nop 
        public_45d4d0 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebx
        je public_45d4fb
        mov eax, dword ptr ds : [edi-0x1C]
        cmp eax, dword ptr ds : [esi+0x58]
        je public_45d4ea
        cmp eax, dword ptr ds : [esi+0x1BC]
        je public_45d4ea
        xor al, al
        jmp public_45d4ec
        public_45d4ea : nop
        mov al, 1
        public_45d4ec : nop
        mov edx, dword ptr ds : [ecx]
        movzx eax, al
        push ebx
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        public_45d4fb : nop
        add edi, 4
        dec ebp
        jne public_45d4d0
        public_45d501 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x45d210)
        ASM_EXPORT_ENTRY_FIRST(0x45d374, public_45d374)
        ASM_EXPORT_ENTRY_LAST(0x45d459, public_45d459)
    }
}

#undef public_45d240
#undef public_45d252
#undef public_45d269
#undef public_45d284
#undef public_45d2eb
#undef public_45d302
#undef public_45d313
#undef public_45d325
#undef public_45d33c
#undef public_45d358
#undef public_45d35f
#undef public_45d366
#undef public_45d36d
#undef public_45d374
#undef public_45d37b
#undef public_45d382
#undef public_45d387
#undef public_45d3b0
#undef public_45d3ca
#undef public_45d3cc
#undef public_45d3db
#undef public_45d3e9
#undef public_45d40b
#undef public_45d418
#undef public_45d444
#undef public_45d44b
#undef public_45d452
#undef public_45d459
#undef public_45d460
#undef public_45d467
#undef public_45d46e
#undef public_45d470
#undef public_45d4d0
#undef public_45d4ea
#undef public_45d4ec
#undef public_45d4fb
#undef public_45d501

#pragma init_seg(compiler)
extern "C" void const* const public_45d374 = __AsmFindLabelExport(&internal_45d210, 0x45d374);
extern "C" void const* const public_45d459 = __AsmFindLabelExport(&internal_45d210, 0x45d459);
