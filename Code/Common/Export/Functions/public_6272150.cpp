#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626c5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6271fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6272770);
CLANG_FORWARD_PROC_SYMBOL(public_6282290);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_63928a1);

#define public_62721e0 _public_62721e0
#define public_6272212 _public_6272212
#define public_6272224 _public_6272224
#define public_6272267 _public_6272267
#define public_6272296 _public_6272296
#define public_6272299 _public_6272299
#define public_627229d _public_627229d
#define public_62722b0 _public_62722b0
#define public_62722cc _public_62722cc
#define public_62722fa _public_62722fa
#define public_6272340 _public_6272340
#define public_6272374 _public_6272374
#define public_627237a _public_627237a
#define public_627237e _public_627237e
#define public_6272396 _public_6272396
#define public_62723b8 _public_62723b8
#define public_62723d2 _public_62723d2
#define public_62723f0 _public_62723f0
#define public_62723fe _public_62723fe
#define public_6272425 _public_6272425

PROC_DECLARE(0x6272150, internal_6272150, public_6272150);
extern "C" NAKED register_t __cdecl internal_6272150()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63928a1 @0x6272152*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63928a1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xEC
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [ebx+8], 2
        mov dword ptr ss : [esp+0x14], ebx
        jb public_6272425
        mov al, byte ptr ds : [ebx]
        push ebp
        push esi
        push edi
        push 0x10
        mov byte ptr ss : [esp+0x14], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0
/*FIXUP push offset _public_62a68e0 @0x62721a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
/*FIXUP push offset _public_626c5d0 @0x62721a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_626c5d0
        push 0x10
        push 0xC
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov dword ptr ss : [esp+0x118], 0
        call public_6391ef0
        mov eax, dword ptr ds : [ebx+8]
        xor ebp, ebp
        test eax, eax
        mov byte ptr ss : [esp+0x104], 1
        mov dword ptr ss : [esp+0x1C], ebp
        je public_62723fe
        lea esp, ss:[esp]
        public_62721e0 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, eax
        je public_6272212
        mov edx, dword ptr ds : [eax]
        cmp ecx, edx
        je public_6272212
        push edx
        push eax
        push ebx
        push ecx
        lea ecx, ss:[esp+0x20]
        call public_6272770
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+8]
        inc ecx
        dec eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ds : [ebx+8], eax
        public_6272212 : nop
        xor esi, esi
        test ebp, ebp
        mov dword ptr ss : [esp+0x30], esi
        jbe public_62723b8
        lea edi, ss:[esp+0x40]
        public_6272224 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_62722fa
        lea eax, ds:[edi-4]
        lea ecx, ss:[esp+0x10]
        cmp ecx, eax
        lea ebx, ds:[edi-4]
        je public_62722cc
        mov esi, dword ptr ds : [edi]
        mov ebp, dword ptr ds : [esi]
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x38], esi
        call public_632c410
        cmp ebp, esi
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x38], ecx
        je public_627229d
        public_6272267 : nop
        cmp eax, ecx
        je public_62722b0
        mov dx, word ptr ds : [eax+8]
        cmp dx, word ptr ss : [ebp+8]
        jae public_6272296
        mov esi, dword ptr ds : [eax]
        push esi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        push ebp
        mov ecx, ebx
        call public_6272770
        mov ecx, dword ptr ss : [esp+0x38]
        mov eax, esi
        mov esi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6272299
        public_6272296 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6272299 : nop
        cmp ebp, esi
        jne public_6272267
        public_627229d : nop
        cmp eax, ecx
        je public_62722b0
        push ecx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        mov ecx, ebx
        call public_6272770
        public_62722b0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ss : [esp+0x1C]
        add eax, edx
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ss : [esp+0x18], 0
        public_62722cc : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi+4]
        inc esi
        mov dword ptr ds : [edi+4], edx
        add edi, 0xC
        cmp esi, ebp
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x30], esi
        jb public_6272224
        public_62722fa : nop
        cmp esi, 0xF
        jne public_62723b8
        lea eax, ss:[esp+0x28]
        push eax
        lea ecx, ss:[esp+0xF4]
        call public_632c410
        mov ebx, dword ptr ss : [esp+0xF4]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x28]
        cmp ecx, ebx
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x2C]
        je public_627237e
        lea esp, ss:[esp]
        public_6272340 : nop
        cmp eax, edi
        je public_6272396
        mov dx, word ptr ds : [eax+8]
        cmp dx, word ptr ds : [ecx+8]
        jae public_6272374
        mov esi, dword ptr ds : [eax]
        push esi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea ecx, ss:[esp+0x100]
        call public_6272770
        mov ecx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov eax, esi
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_627237a
        public_6272374 : nop
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], ecx
        public_627237a : nop
        cmp ecx, ebx
        jne public_6272340
        public_627237e : nop
        cmp eax, edi
        je public_6272396
        push edi
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x100]
        call public_6272770
        public_6272396 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xF8]
        mov ebx, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ss : [esp+0xF8], eax
        mov dword ptr ss : [esp+0x18], 0
        jmp public_62723d2
        public_62723b8 : nop
        lea eax, ss:[esp+0x10]
        lea ecx, ds:[esi+esi*2]
        push eax
        lea ecx, ss:[esp+ecx*4+0x40]
        call public_6282290
        cmp esi, ebp
        jne public_62723d2
        inc ebp
        mov dword ptr ss : [esp+0x1C], ebp
        public_62723d2 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jne public_62721e0
        test ebp, ebp
        jbe public_62723fe
        lea edx, ss:[ebp+ebp*2]
        lea esi, ss:[esp+edx*4+0x3C]
        mov edi, ebp
        nop 
        lea esp, ss:[esp]
        public_62723f0 : nop
        sub esi, 0xC
        push esi
        mov ecx, ebx
        call public_6271fb0
        dec edi
        jne public_62723f0
/*FIXUP public_62723fe : nop
        push offset _public_62a68e0 @0x62723fe*/
  FIXUP public_62723fe : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
        push 0x10
        push 0xC
        lea eax, ss:[esp+0x48]
        push eax
        mov byte ptr ss : [esp+0x114], 0
        call public_6391dfc
        lea ecx, ss:[esp+0x10]
        call public_62a68e0
        pop edi
        pop esi
        pop ebp
        public_6272425 : nop
        mov ecx, dword ptr ss : [esp+0xF0]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xF8
        ret 
        UNREACHABLE_TRAP(0x6272150)
    }
}

#undef public_62721e0
#undef public_6272212
#undef public_6272224
#undef public_6272267
#undef public_6272296
#undef public_6272299
#undef public_627229d
#undef public_62722b0
#undef public_62722cc
#undef public_62722fa
#undef public_6272340
#undef public_6272374
#undef public_627237a
#undef public_627237e
#undef public_6272396
#undef public_62723b8
#undef public_62723d2
#undef public_62723f0
#undef public_62723fe
#undef public_6272425
