#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6263860);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_639244a);

#define public_62638cb _public_62638cb
#define public_62638d8 _public_62638d8
#define public_62638e5 _public_62638e5
#define public_62638fc _public_62638fc
#define public_6263919 _public_6263919
#define public_6263922 _public_6263922
#define public_626394c _public_626394c
#define public_6263980 _public_6263980
#define public_6263983 _public_6263983
#define public_62639a1 _public_62639a1
#define public_62639ae _public_62639ae
#define public_62639bb _public_62639bb
#define public_62639d2 _public_62639d2
#define public_62639ef _public_62639ef
#define public_62639f8 _public_62639f8

PROC_DECLARE(0x6263860, internal_6263860, public_6263860);
extern "C" NAKED register_t __cdecl internal_6263860()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639244a @0x6263862*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639244a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        xor ebx, ebx
        lea esi, ds:[edi+0x1428]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x14], esi
        mov eax, dword ptr ds : [public_63991c0]
        mov ecx, dword ptr ds : [eax]
        push ecx
        push ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x28], 1
        call dword ptr ds : [public_6399198]
        mov eax, dword ptr ds : [esi+0x10]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_62638e5
        cmp dword ptr ds : [esi+0x14], ebx
        je public_62638d8
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebx
        je public_62638cb
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        public_62638cb : nop
        mov edx, dword ptr ds : [esi+0x14]
        push edx
        call dword ptr ds : [public_639913c]
        mov dword ptr ds : [esi+0x14], ebx
        public_62638d8 : nop
        mov eax, dword ptr ds : [esi+0x10]
        push eax
        call dword ptr ds : [public_639913c]
        mov dword ptr ds : [esi+0x10], ebp
        public_62638e5 : nop
        mov eax, dword ptr ds : [esi+0x18]
        cmp eax, ebx
        je public_62638fc
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ds : [esi+0x18], ebx
        mov dword ptr ds : [esi+0x1C], ebx
        public_62638fc : nop
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x20], ebx
        je public_6263922
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_6263919
        cmp cl, 0xFF
        je public_6263919
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_6263922
        public_6263919 : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_6263922 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov ecx, dword ptr ds : [public_63991c0]
        mov esi, dword ptr ds : [ecx]
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 2
        call dword ptr ds : [public_63991bc]
        mov eax, dword ptr ds : [edi+8]
        cmp eax, esi
        jae public_626394c
        mov esi, eax
        public_626394c : nop
        cmp esi, ebx
        jbe public_6263983
        mov ecx, dword ptr ds : [edi+4]
        sub eax, esi
        push eax
        lea edx, ds:[ecx+esi]
        push edx
        push ecx
        call dword ptr ds : [public_6399330]
        mov ebp, dword ptr ds : [edi+8]
        add esp, 0xC
        push ebx
        sub ebp, esi
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_63991d4]
        test al, al
        je public_6263980
        push ebp
        mov ecx, edi
        call dword ptr ds : [public_63991d8]
        public_6263980 : nop
        or ebp, 0xFFFFFFFF
        public_6263983 : nop
        cmp dword ptr ds : [edi+0x10], ebp
        je public_62639bb
        cmp dword ptr ds : [edi+0x14], ebx
        je public_62639ae
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, ebx
        je public_62639a1
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        public_62639a1 : nop
        mov eax, dword ptr ds : [edi+0x14]
        push eax
        call dword ptr ds : [public_639913c]
        mov dword ptr ds : [edi+0x14], ebx
        public_62639ae : nop
        mov ecx, dword ptr ds : [edi+0x10]
        push ecx
        call dword ptr ds : [public_639913c]
        mov dword ptr ds : [edi+0x10], ebp
        public_62639bb : nop
        mov eax, dword ptr ds : [edi+0x18]
        cmp eax, ebx
        je public_62639d2
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ds : [edi+0x18], ebx
        mov dword ptr ds : [edi+0x1C], ebx
        public_62639d2 : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        mov dword ptr ds : [edi+0x20], ebx
        je public_62639f8
        mov cl, byte ptr ds : [eax-1]
        dec eax
        cmp cl, bl
        je public_62639ef
        cmp cl, 0xFF
        je public_62639ef
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62639f8
        public_62639ef : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62639f8 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6263860)
    }
}

#undef public_62638cb
#undef public_62638d8
#undef public_62638e5
#undef public_62638fc
#undef public_6263919
#undef public_6263922
#undef public_626394c
#undef public_6263980
#undef public_6263983
#undef public_62639a1
#undef public_62639ae
#undef public_62639bb
#undef public_62639d2
#undef public_62639ef
#undef public_62639f8
