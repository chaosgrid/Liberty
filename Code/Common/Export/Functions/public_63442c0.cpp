#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63442c0);
CLANG_FORWARD_PROC_SYMBOL(public_63522f0);
CLANG_FORWARD_PROC_SYMBOL(public_6352620);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63979c9);

#define public_63442f2 _public_63442f2
#define public_6344301 _public_6344301
#define public_634431f _public_634431f
#define public_6344339 _public_6344339
#define public_634434a _public_634434a
#define public_634435b _public_634435b
#define public_634437a _public_634437a
#define public_6344389 _public_6344389
#define public_63443a6 _public_63443a6
#define public_63443ad _public_63443ad
#define public_63443e1 _public_63443e1
#define public_63443e8 _public_63443e8

PROC_DECLARE(0x63442c0, internal_63442c0, public_63442c0);
extern "C" NAKED register_t __cdecl internal_63442c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63979c9 @0x63442c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63979c9
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        xor edi, edi
        mov di, word ptr ds : [esi+0xA]
        mov dword ptr ss : [esp+0x1C], 1
        dec edi
        js public_6344301
        public_63442f2 : nop
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [eax+edi*4]
        mov edx, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [edx+8]
        dec edi
        jns public_63442f2
        public_6344301 : nop
        mov eax, dword ptr ds : [esi]
        xor ebx, ebx
        mov dword ptr ds : [eax+0x1C], ebx
        mov edi, dword ptr ds : [esi+0x30]
        cmp edi, ebx
        je public_634431f
        mov ecx, edi
        call public_6352620
        push edi
        call public_6391d5a
        add esp, 4
        public_634431f : nop
        mov edi, dword ptr ds : [esi+0x2C]
        cmp edi, ebx
        mov dword ptr ds : [esi+0x30], ebx
        je public_6344339
        mov ecx, edi
        call public_6352620
        push edi
        call public_6391d5a
        add esp, 4
        public_6344339 : nop
        mov ecx, dword ptr ds : [esi+0x28]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x2C], ebx
        je public_634434a
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+4]
        public_634434a : nop
        mov ecx, dword ptr ds : [esi+0x34]
        cmp ecx, ebx
        mov dword ptr ds : [esi+0x28], ebx
        je public_634435b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        public_634435b : nop
        lea edi, ds:[esi+0x10]
        mov dword ptr ds : [esi+0x34], ebx
        push ebp
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [edi], offset public_63a5410
        xor ebp, ebp
        mov bp, word ptr ds : [edi+0x12]
        mov byte ptr ss : [esp+0x20], 3
        dec ebp
        js public_6344389
        public_634437a : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov ecx, dword ptr ds : [ecx+ebp*4]
        mov edx, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [edx+8]
        dec ebp
        jns public_634437a
        public_6344389 : nop
        mov eax, dword ptr ds : [edi+0x14]
        lea ecx, ds:[edi+0x18]
        cmp eax, ecx
        mov byte ptr ss : [esp+0x20], 2
        pop ebp
        je public_63443ad
        cmp eax, ebx
        je public_63443a6
        push eax
        call public_6343fb0
        add esp, 4
        public_63443a6 : nop
        mov dword ptr ds : [edi+0x14], ebx
        mov word ptr ds : [edi+0x10], bx
        public_63443ad : nop
        mov word ptr ds : [edi+0x12], bx
        mov ecx, edi
        mov byte ptr ss : [esp+0x1C], bl
        mov dword ptr ds : [edi], offset public_63a5408
        call public_63522f0
        mov eax, dword ptr ds : [esi+0xC]
        lea edx, ds:[esi+0x10]
        cmp eax, edx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_63443e8
        cmp eax, ebx
        je public_63443e1
        push eax
        call public_6343fb0
        add esp, 4
        public_63443e1 : nop
        mov dword ptr ds : [esi+0xC], ebx
        mov word ptr ds : [esi+8], bx
        public_63443e8 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov word ptr ds : [esi+0xA], bx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x63442c0)
    }
}

#undef public_63442f2
#undef public_6344301
#undef public_634431f
#undef public_6344339
#undef public_634434a
#undef public_634435b
#undef public_634437a
#undef public_6344389
#undef public_63443a6
#undef public_63443ad
#undef public_63443e1
#undef public_63443e8
