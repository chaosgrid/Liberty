#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414280);
CLANG_FORWARD_PROC_SYMBOL(public_4142a0);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4bff30);
CLANG_FORWARD_PROC_SYMBOL(public_58a520);
CLANG_FORWARD_PROC_SYMBOL(public_58a530);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd608);

#define public_4bff7f _public_4bff7f
#define public_4bfff8 _public_4bfff8
#define public_4c0001 _public_4c0001
#define public_4c0028 _public_4c0028
#define public_4c002a _public_4c002a
#define public_4c0061 _public_4c0061
#define public_4c0073 _public_4c0073
#define public_4c0075 _public_4c0075
#define public_4c008f _public_4c008f
#define public_4c00b2 _public_4c00b2
#define public_4c00cc _public_4c00cc
#define public_4c00d0 _public_4c00d0
#define public_4c00ea _public_4c00ea
#define public_4c00ec _public_4c00ec
#define public_4c010a _public_4c010a

PROC_DECLARE(0x4bff30, internal_4bff30, public_4bff30);
extern "C" NAKED register_t __cdecl internal_4bff30()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd608 @0x4bff38*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd608
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        call public_42d680
        fadd dword ptr ds : [public_6728c0]
        fst dword ptr ds : [public_6728c0]
        fcomp qword ptr ds : [public_5c75e8]
        fnstsw ax
        test ah, 0x41
        jne public_4bff7f
        mov al, byte ptr ds : [public_61218c]
        test al, al
        sete al
        mov dword ptr ds : [public_6728c0], 0
        mov byte ptr ds : [public_61218c], al
        public_4bff7f : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebp
        push esi
        call public_58a520
        mov ebp, dword ptr ds : [public_5c71c8]
        mov esi, eax
        push esi
        call ebp
        add esp, 4
        dec eax
        js public_4c010a
        cmp word ptr ds : [esi+eax*2], 0x7C
        mov cl, byte ptr ds : [public_61218c]
        sete al
        cmp al, cl
        je public_4c010a
        push ebx
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        cmp esi, ebx
        mov dword ptr ss : [esp+0x24], ebx
        je public_4bfff8
        push esi
        call ebp
        mov edi, eax
        add esp, 4
        lea ecx, ds:[edi+1]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_4142a0
        mov edx, dword ptr ss : [esp+0x14]
        push edi
        push esi
        push edx
        call dword ptr ds : [public_5c71c0]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        mov word ptr ds : [eax+edi*2], bx
        jmp public_4c0001
        public_4bfff8 : nop
        lea ecx, ss:[esp+0x14]
        call public_414280
        public_4c0001 : nop
        mov al, byte ptr ds : [public_61218c]
        test al, al
        mov eax, dword ptr ss : [esp+0x14]
        je public_4c0061
        cmp eax, ebx
        mov word ptr ss : [esp+0x10], 0x7C
        mov word ptr ss : [esp+0x12], bx
        je public_4c0028
        push eax
        call ebp
        add esp, 4
        mov esi, eax
        jmp public_4c002a
        public_4c0028 : nop
        xor esi, esi
        public_4c002a : nop
        lea ecx, ds:[esi+2]
        push ecx
        lea ecx, ss:[esp+0x18]
        call public_4142a0
        mov eax, dword ptr ss : [esp+0x14]
        push 1
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[eax+esi*2]
        push ecx
        call dword ptr ds : [public_5c71c0]
        mov edx, dword ptr ss : [esp+0x20]
        mov word ptr ds : [edx+esi*2+2], bx
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        jmp public_4c00ec
        public_4c0061 : nop
        cmp eax, ebx
        je public_4c0073
        push eax
        call ebp
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        jmp public_4c0075
        public_4c0073 : nop
        xor ecx, ecx
        public_4c0075 : nop
        test eax, eax
        lea esi, ds:[ecx-1]
        mov ebx, eax
        je public_4c00ea
        cmp esi, 0xFFFFFFFF
        jne public_4c008f
        push eax
        call ebp
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        public_4c008f : nop
        mov ecx, dword ptr ss : [esp+0x18]
        lea edi, ds:[esi+1]
        cmp edi, ecx
        jbe public_4c00d0
        test eax, eax
        je public_4c00b2
        lea ecx, ds:[edi+edi]
        push ecx
        push eax
        call dword ptr ds : [public_5c71bc]
        add esp, 8
        mov dword ptr ss : [esp+0x14], eax
        jmp public_4c00cc
        public_4c00b2 : nop
        lea edx, ds:[edi+edi]
        push edx
        call dword ptr ds : [public_5c71cc]
        mov dword ptr ss : [esp+0x18], eax
        mov word ptr ds : [eax], 0
        mov eax, dword ptr ss : [esp+0x18]
        add esp, 4
        public_4c00cc : nop
        mov dword ptr ss : [esp+0x18], edi
        public_4c00d0 : nop
        push esi
        push ebx
        push eax
        call dword ptr ds : [public_5c71c0]
        mov eax, dword ptr ss : [esp+0x20]
        mov word ptr ds : [eax+esi*2], 0
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 0xC
        public_4c00ea : nop
        xor ebx, ebx
        public_4c00ec : nop
        mov ecx, dword ptr ss : [esp+0x2C]
        push eax
        call public_58a530
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        cmp eax, ebx
        pop ebx
        je public_4c010a
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        public_4c010a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4bff30)
    }
}

#undef public_4bff7f
#undef public_4bfff8
#undef public_4c0001
#undef public_4c0028
#undef public_4c002a
#undef public_4c0061
#undef public_4c0073
#undef public_4c0075
#undef public_4c008f
#undef public_4c00b2
#undef public_4c00cc
#undef public_4c00d0
#undef public_4c00ea
#undef public_4c00ec
#undef public_4c010a
