#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6268770);
CLANG_FORWARD_PROC_SYMBOL(public_6272770);
CLANG_FORWARD_PROC_SYMBOL(public_6282290);
CLANG_FORWARD_PROC_SYMBOL(public_62a68e0);
CLANG_FORWARD_PROC_SYMBOL(public_632c410);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dfc);
CLANG_FORWARD_PROC_SYMBOL(public_6391ef0);
CLANG_FORWARD_JUMP_SYMBOL(public_63926a1);

#define public_6268bc0 _public_6268bc0
#define public_6268bf2 _public_6268bf2
#define public_6268c04 _public_6268c04
#define public_6268c47 _public_6268c47
#define public_6268c76 _public_6268c76
#define public_6268c79 _public_6268c79
#define public_6268c7d _public_6268c7d
#define public_6268c90 _public_6268c90
#define public_6268cac _public_6268cac
#define public_6268cda _public_6268cda
#define public_6268d20 _public_6268d20
#define public_6268d54 _public_6268d54
#define public_6268d5a _public_6268d5a
#define public_6268d5e _public_6268d5e
#define public_6268d76 _public_6268d76
#define public_6268d98 _public_6268d98
#define public_6268db2 _public_6268db2
#define public_6268dd2 _public_6268dd2
#define public_6268de3 _public_6268de3
#define public_6268e0a _public_6268e0a

PROC_DECLARE(0x6268b30, internal_6268b30, public_6268b30);
extern "C" NAKED register_t __cdecl internal_6268b30()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63926a1 @0x6268b32*/
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
        mov dword ptr ss : [esp+0x10], ebx
        jb public_6268e0a
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
/*FIXUP push offset _public_62a68e0 @0x6268b80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_62a68e0
/*FIXUP push offset _public_6263cc0 @0x6268b85*/
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
        mov dword ptr ss : [esp+0x20], ebp
        je public_6268de3
        lea esp, ss:[esp]
        public_6268bc0 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, eax
        je public_6268bf2
        mov edx, dword ptr ds : [eax]
        cmp ecx, edx
        je public_6268bf2
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
        public_6268bf2 : nop
        xor esi, esi
        test ebp, ebp
        mov dword ptr ss : [esp+0x30], esi
        jbe public_6268d98
        lea edi, ss:[esp+0x40]
        public_6268c04 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6268cda
        lea eax, ds:[edi-4]
        lea ecx, ss:[esp+0x10]
        cmp ecx, eax
        lea ebx, ds:[edi-4]
        je public_6268cac
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
        je public_6268c7d
        public_6268c47 : nop
        cmp eax, ecx
        je public_6268c90
        mov dx, word ptr ds : [eax+0xA]
        cmp dx, word ptr ss : [ebp+0xA]
        jbe public_6268c76
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
        jmp public_6268c79
        public_6268c76 : nop
        mov ebp, dword ptr ss : [ebp]
        public_6268c79 : nop
        cmp ebp, esi
        jne public_6268c47
        public_6268c7d : nop
        cmp eax, ecx
        je public_6268c90
        push ecx
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push esi
        mov ecx, ebx
        call public_6272770
        public_6268c90 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ss : [esp+0x30]
        mov ebp, dword ptr ss : [esp+0x20]
        add eax, edx
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ss : [esp+0x18], 0
        public_6268cac : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [edi+4]
        inc esi
        mov dword ptr ds : [edi+4], edx
        add edi, 0xC
        cmp esi, ebp
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x30], esi
        jb public_6268c04
        public_6268cda : nop
        cmp esi, 0xF
        jne public_6268d98
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0xF4]
        call public_632c410
        mov ebx, dword ptr ss : [esp+0xF4]
        lea ecx, ss:[esp+0x28]
        push ecx
        lea ecx, ss:[esp+0x14]
        call public_632c410
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp ecx, ebx
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x28]
        je public_6268d5e
        lea esp, ss:[esp]
        public_6268d20 : nop
        cmp eax, edi
        je public_6268d76
        mov dx, word ptr ds : [eax+0xA]
        cmp dx, word ptr ds : [ecx+0xA]
        jbe public_6268d54
        mov esi, dword ptr ds : [eax]
        push esi
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        push ecx
        lea ecx, ss:[esp+0x100]
        call public_6272770
        mov ecx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x20]
        mov eax, esi
        mov dword ptr ss : [esp+0x28], eax
        jmp public_6268d5a
        public_6268d54 : nop
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x2C], ecx
        public_6268d5a : nop
        cmp ecx, ebx
        jne public_6268d20
        public_6268d5e : nop
        cmp eax, edi
        je public_6268d76
        push edi
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push ebx
        lea ecx, ss:[esp+0x100]
        call public_6272770
        public_6268d76 : nop
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0xF8]
        mov ebx, dword ptr ss : [esp+0x1C]
        add eax, edx
        mov dword ptr ss : [esp+0xF8], eax
        mov dword ptr ss : [esp+0x18], 0
        jmp public_6268db2
        public_6268d98 : nop
        lea eax, ss:[esp+0x10]
        lea ecx, ds:[esi+esi*2]
        push eax
        lea ecx, ss:[esp+ecx*4+0x40]
        call public_6282290
        cmp esi, ebp
        jne public_6268db2
        inc ebp
        mov dword ptr ss : [esp+0x20], ebp
        public_6268db2 : nop
        mov eax, dword ptr ds : [ebx+8]
        test eax, eax
        jne public_6268bc0
        test ebp, ebp
        jbe public_6268de3
        mov ebx, dword ptr ss : [esp+0x10C]
        lea edx, ss:[ebp+ebp*2]
        lea esi, ss:[esp+edx*4+0x3C]
        mov edi, ebp
        public_6268dd2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        push ebx
        sub esi, 0xC
        push esi
        call public_6268770
        dec edi
        jne public_6268dd2
/*FIXUP public_6268de3 : nop
        push offset _public_62a68e0 @0x6268de3*/
  FIXUP public_6268de3 : nop
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
        public_6268e0a : nop
        mov ecx, dword ptr ss : [esp+0xF0]
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xF8
        ret 4
        UNREACHABLE_TRAP(0x6268b30)
    }
}

#undef public_6268bc0
#undef public_6268bf2
#undef public_6268c04
#undef public_6268c47
#undef public_6268c76
#undef public_6268c79
#undef public_6268c7d
#undef public_6268c90
#undef public_6268cac
#undef public_6268cda
#undef public_6268d20
#undef public_6268d54
#undef public_6268d5a
#undef public_6268d5e
#undef public_6268d76
#undef public_6268d98
#undef public_6268db2
#undef public_6268dd2
#undef public_6268de3
#undef public_6268e0a
