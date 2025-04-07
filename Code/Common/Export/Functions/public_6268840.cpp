#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62686a0);
CLANG_FORWARD_PROC_SYMBOL(public_6272770);
CLANG_FORWARD_PROC_SYMBOL(public_6282290);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_63926a1);

#define public_62688d0 _public_62688d0
#define public_6268902 _public_6268902
#define public_6268914 _public_6268914
#define public_6268957 _public_6268957
#define public_6268986 _public_6268986
#define public_6268989 _public_6268989
#define public_626898d _public_626898d
#define public_62689a0 _public_62689a0
#define public_62689bc _public_62689bc
#define public_62689ea _public_62689ea
#define public_6268a30 _public_6268a30
#define public_6268a64 _public_6268a64
#define public_6268a6a _public_6268a6a
#define public_6268a6e _public_6268a6e
#define public_6268a86 _public_6268a86
#define public_6268aa8 _public_6268aa8
#define public_6268ac2 _public_6268ac2
#define public_6268ae0 _public_6268ae0
#define public_6268aee _public_6268aee
#define public_6268b15 _public_6268b15

PROC_DECLARE(0x6268840, internal_6268840, public_6268840);
extern "C" NAKED register_t __cdecl internal_6268840()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63926a1 @0x6268842*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63926a1
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
        jb public_6268b15
        mov al, byte ptr ds : [ebx]
        push ebp
        push esi
        push edi
        push 0x28
        mov byte ptr ss : [esp+0x14], al
        call public_6391d9c
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], 0
/*FIXUP push offset _public_62a68e0 @0x6268890*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
/*FIXUP push offset _public_6263cc0 @0x6268895*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_6263cc0
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
        je public_6268aee
        lea esp, ss:[esp]
        public_62688d0 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, eax
        je public_6268902
        mov edx, dword ptr ds : [eax]
        cmp ecx, edx
        je public_6268902
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
        public_6268902 : nop
        xor esi, esi
        test ebp, ebp
        mov dword ptr ss : [esp+0x30], esi
        jbe public_6268aa8
        lea edi, ss:[esp+0x40]
        public_6268914 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_62689ea
        lea eax, ds:[edi-4]
        lea ecx, ss:[esp+0x10]
        cmp ecx, eax
        lea ebx, ds:[edi-4]
        je public_62689bc
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
        je public_626898d
        public_6268957 : nop
        cmp eax, ecx
        je public_62689a0
        mov dx, word ptr ds : [eax+0xA]
        cmp dx, word ptr ss : [ebp+0xA]
        jae public_6268986
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
        jmp public_6268989
        public_6268986 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6268989 : nop
        cmp ebp, esi
        jne public_6268957
        public_626898d : nop
        cmp eax, ecx
        je public_62689a0
        push ecx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        mov ecx, ebx
        call public_6272770
        public_62689a0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ss : [esp+0x1C]
        add eax, edx
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ss : [esp+0x18], 0
        public_62689bc : nop
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
        jb public_6268914
        public_62689ea : nop
        cmp esi, 0xF
        jne public_6268aa8
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
        je public_6268a6e
        lea esp, ss:[esp]
        public_6268a30 : nop
        cmp eax, edi
        je public_6268a86
        mov dx, word ptr ds : [eax+0xA]
        cmp dx, word ptr ds : [ecx+0xA]
        jae public_6268a64
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
        jmp public_6268a6a
        public_6268a64 : nop
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x28], ecx
        public_6268a6a : nop
        cmp ecx, ebx
        jne public_6268a30
        public_6268a6e : nop
        cmp eax, edi
        je public_6268a86
        push edi
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x100]
        call public_6272770
        public_6268a86 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xF8]
        mov ebx, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ss : [esp+0xF8], eax
        mov dword ptr ss : [esp+0x18], 0
        jmp public_6268ac2
        public_6268aa8 : nop
        lea eax, ss:[esp+0x10]
        lea ecx, ds:[esi+esi*2]
        push eax
        lea ecx, ss:[esp+ecx*4+0x40]
        call public_6282290
        cmp esi, ebp
        jne public_6268ac2
        inc ebp
        mov dword ptr ss : [esp+0x1C], ebp
        public_6268ac2 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jne public_62688d0
        test ebp, ebp
        jbe public_6268aee
        lea edx, ss:[ebp+ebp*2]
        lea esi, ss:[esp+edx*4+0x3C]
        mov edi, ebp
        nop 
        lea esp, ss:[esp]
        public_6268ae0 : nop
        sub esi, 0xC
        push esi
        mov ecx, ebx
        call public_62686a0
        dec edi
        jne public_6268ae0
/*FIXUP public_6268aee : nop
        push offset _public_62a68e0 @0x6268aee*/
  FIXUP public_6268aee : nop
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
        public_6268b15 : nop
        mov ecx, dword ptr ss : [esp+0xF0]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xF8
        ret 
        UNREACHABLE_TRAP(0x6268840)
    }
}

#undef public_62688d0
#undef public_6268902
#undef public_6268914
#undef public_6268957
#undef public_6268986
#undef public_6268989
#undef public_626898d
#undef public_62689a0
#undef public_62689bc
#undef public_62689ea
#undef public_6268a30
#undef public_6268a64
#undef public_6268a6a
#undef public_6268a6e
#undef public_6268a86
#undef public_6268aa8
#undef public_6268ac2
#undef public_6268ae0
#undef public_6268aee
#undef public_6268b15
