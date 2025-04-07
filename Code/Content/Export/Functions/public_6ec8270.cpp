#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ec8290 _public_6ec8290
#define public_6ec82b2 _public_6ec82b2
#define public_6ec82bb _public_6ec82bb
#define public_6ec82c0 _public_6ec82c0
#define public_6ec82e0 _public_6ec82e0
#define public_6ec82e4 _public_6ec82e4
#define public_6ec82e9 _public_6ec82e9
#define public_6ec82ed _public_6ec82ed
#define public_6ec82fc _public_6ec82fc
#define public_6ec8300 _public_6ec8300
#define public_6ec831b _public_6ec831b
#define public_6ec833d _public_6ec833d
#define public_6ec8347 _public_6ec8347
#define public_6ec8362 _public_6ec8362

PROC_DECLARE(0x6ec8270, internal_6ec8270, public_6ec8270);
extern "C" NAKED register_t __cdecl internal_6ec8270()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [eax]
        cmp edx, eax
        mov dword ptr ss : [esp+0xC], ecx
        mov dword ptr ss : [esp], edx
        je public_6ec8362
        push ebx
        push ebp
        push esi
        push edi
        lea esp, ss:[esp]
        public_6ec8290 : nop
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edx+0x300]
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [ebp]
        add eax, 8
        cmp esi, ebp
        mov dword ptr ss : [esp+0x18], edx
        je public_6ec8300
        lea edi, ds:[eax+4]
        mov dword ptr ss : [esp+0x14], edi
        public_6ec82b2 : nop
        test edi, edi
        jne public_6ec82bb
        mov eax, dword ptr ds : [esi+8]
        jmp public_6ec82ed
        public_6ec82bb : nop
        lea eax, ds:[esi+0xC]
        mov edi, edi
        public_6ec82c0 : nop
        mov bl, byte ptr ds : [eax]
        mov cl, bl
        cmp bl, byte ptr ds : [edi]
        jne public_6ec82e4
        test cl, cl
        je public_6ec82e0
        mov bl, byte ptr ds : [eax+1]
        mov cl, bl
        cmp bl, byte ptr ds : [edi+1]
        jne public_6ec82e4
        add eax, 2
        add edi, 2
        test cl, cl
        jne public_6ec82c0
        public_6ec82e0 : nop
        xor eax, eax
        jmp public_6ec82e9
        public_6ec82e4 : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6ec82e9 : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_6ec82ed : nop
        test eax, eax
        sete al
        test al, al
        jne public_6ec82fc
        mov esi, dword ptr ds : [esi]
        cmp esi, ebp
        jne public_6ec82b2
        public_6ec82fc : nop
        cmp esi, ebp
        jne public_6ec8347
        public_6ec8300 : nop
        mov edi, dword ptr ds : [edx+0x300]
        mov ebx, dword ptr ds : [edi+4]
        push 0x3C
        call public_6fa912a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6ec831b
        mov ebx, eax
        public_6ec831b : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6ec833d
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, 0xD
        lea esi, ds:[edx+8]
        mov edi, eax
        rep movsd
        public_6ec833d : nop
        mov eax, dword ptr ss : [esp+0x18]
        inc dword ptr ds : [eax+0x304]
        public_6ec8347 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6ec8290
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6ec8362 : nop
        mov al, 1
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ec8270)
    }
}

#undef public_6ec8290
#undef public_6ec82b2
#undef public_6ec82bb
#undef public_6ec82c0
#undef public_6ec82e0
#undef public_6ec82e4
#undef public_6ec82e9
#undef public_6ec82ed
#undef public_6ec82fc
#undef public_6ec8300
#undef public_6ec831b
#undef public_6ec833d
#undef public_6ec8347
#undef public_6ec8362
