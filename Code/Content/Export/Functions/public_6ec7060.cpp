#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f171e0);

#define public_6ec7087 _public_6ec7087
#define public_6ec7093 _public_6ec7093
#define public_6ec70a0 _public_6ec70a0
#define public_6ec70c0 _public_6ec70c0
#define public_6ec70c4 _public_6ec70c4
#define public_6ec70c9 _public_6ec70c9
#define public_6ec70d1 _public_6ec70d1
#define public_6ec70ea _public_6ec70ea
#define public_6ec7108 _public_6ec7108
#define public_6ec710e _public_6ec710e
#define public_6ec7110 _public_6ec7110
#define public_6ec711b _public_6ec711b

PROC_DECLARE(0x6ec7060, internal_6ec7060, public_6ec7060);
extern "C" NAKED register_t __cdecl internal_6ec7060()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+4]
        mov ecx, dword ptr ds : [ebx+0xC8]
        push esi
        push edi
        mov edi, dword ptr ds : [ecx]
        cmp edi, ecx
        mov dword ptr ss : [esp+0x10], ebx
        mov dword ptr ss : [esp+0x14], ecx
        je public_6ec711b
        lea edx, ss:[ebp+0x10]
        public_6ec7087 : nop
        test edx, edx
        jne public_6ec7093
        mov eax, dword ptr ds : [edi+0x3F0]
        jmp public_6ec70d1
        public_6ec7093 : nop
        mov esi, edx
        lea eax, ds:[edi+0x3F4]
        nop 
        lea esp, ss:[esp]
        public_6ec70a0 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [esi]
        jne public_6ec70c4
        test cl, cl
        je public_6ec70c0
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [esi+1]
        jne public_6ec70c4
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6ec70a0
        public_6ec70c0 : nop
        xor eax, eax
        jmp public_6ec70c9
        public_6ec70c4 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec70c9 : nop
        mov ebx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        public_6ec70d1 : nop
        test eax, eax
        sete al
        test al, al
        jne public_6ec70ea
        mov edi, dword ptr ds : [edi]
        cmp edi, ecx
        jne public_6ec7087
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 
        public_6ec70ea : nop
        mov al, byte ptr ss : [ebp+0x70]
        test al, al
        je public_6ec710e
        mov al, byte ptr ss : [ebp+0x71]
        test al, al
        jne public_6ec7108
        lea esi, ds:[edi+0x424]
        lea edi, ss:[ebp+0x40]
        mov ecx, 9
        rep movsd
        public_6ec7108 : nop
        lea eax, ss:[ebp+0x40]
        push eax
        jmp public_6ec7110
        public_6ec710e : nop
        push 0
        public_6ec7110 : nop
        add ebp, 0xC
        mov ecx, ebx
        push ebp
        call public_6f171e0
        public_6ec711b : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6ec7060)
    }
}

#undef public_6ec7087
#undef public_6ec7093
#undef public_6ec70a0
#undef public_6ec70c0
#undef public_6ec70c4
#undef public_6ec70c9
#undef public_6ec70d1
#undef public_6ec70ea
#undef public_6ec7108
#undef public_6ec710e
#undef public_6ec7110
#undef public_6ec711b
