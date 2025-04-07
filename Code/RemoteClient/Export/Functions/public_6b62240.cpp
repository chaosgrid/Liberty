#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b62289 _public_6b62289
#define public_6b622a1 _public_6b622a1
#define public_6b622b1 _public_6b622b1
#define public_6b622d0 _public_6b622d0
#define public_6b622e0 _public_6b622e0
#define public_6b622ff _public_6b622ff
#define public_6b6230f _public_6b6230f
#define public_6b6232e _public_6b6232e
#define public_6b6233e _public_6b6233e
#define public_6b6235f _public_6b6235f
#define public_6b6236f _public_6b6236f
#define public_6b6238e _public_6b6238e
#define public_6b6239e _public_6b6239e
#define public_6b623bc _public_6b623bc
#define public_6b623cc _public_6b623cc
#define public_6b623f3 _public_6b623f3
#define public_6b62424 _public_6b62424

PROC_DECLARE(0x6b62240, internal_6b62240, public_6b62240);
extern "C" NAKED register_t __cdecl internal_6b62240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b62289
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b62289 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x16
        jbe public_6b622a1
        mov dword ptr ds : [esi+0xC], ebp
        public_6b622a1 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b622b1
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b622b1 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b622d0
        mov dword ptr ds : [esi+0xC], ebp
        public_6b622d0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b622e0
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b622e0 : nop
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [edi+0x24]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b622ff
        mov dword ptr ds : [esi+0xC], ebp
        public_6b622ff : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b6230f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b6230f : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b6232e
        mov dword ptr ds : [esi+0xC], ebp
        public_6b6232e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b6233e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b6233e : nop
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [edi+0x2C]
        mov word ptr ds : [eax], dx
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b6235f
        mov dword ptr ds : [esi+0xC], ebp
        public_6b6235f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b6236f
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b6236f : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x30]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b6238e
        mov dword ptr ds : [esi+0xC], ebp
        public_6b6238e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b6239e
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b6239e : nop
        mov eax, dword ptr ds : [ebx]
        fld dword ptr ds : [edi+0x34]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b623bc
        mov dword ptr ds : [esi+0xC], ebp
        public_6b623bc : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6b623cc
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b623cc : nop
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [edi+0x38]
        mov byte ptr ds : [eax], cl
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b623f3
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 0xC
        public_6b623f3 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx], edi
        mov eax, dword ptr ds : [esi]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        jbe public_6b62424
        mov dword ptr ds : [ecx+0x10], esi
        public_6b62424 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b62240)
    }
}

#undef public_6b62289
#undef public_6b622a1
#undef public_6b622b1
#undef public_6b622d0
#undef public_6b622e0
#undef public_6b622ff
#undef public_6b6230f
#undef public_6b6232e
#undef public_6b6233e
#undef public_6b6235f
#undef public_6b6236f
#undef public_6b6238e
#undef public_6b6239e
#undef public_6b623bc
#undef public_6b623cc
#undef public_6b623f3
#undef public_6b62424
