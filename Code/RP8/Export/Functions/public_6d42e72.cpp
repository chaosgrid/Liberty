#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42e72);

#define public_6d42eb5 _public_6d42eb5
#define public_6d42ec3 _public_6d42ec3
#define public_6d42ec8 _public_6d42ec8
#define public_6d42ecf _public_6d42ecf
#define public_6d42edd _public_6d42edd
#define public_6d42eec _public_6d42eec
#define public_6d42f13 _public_6d42f13
#define public_6d42f2d _public_6d42f2d
#define public_6d42f35 _public_6d42f35
#define public_6d42f44 _public_6d42f44
#define public_6d42f65 _public_6d42f65
#define public_6d42f75 _public_6d42f75
#define public_6d42fa4 _public_6d42fa4
#define public_6d42fbe _public_6d42fbe
#define public_6d42fc3 _public_6d42fc3
#define public_6d42fd4 _public_6d42fd4
#define public_6d42fee _public_6d42fee
#define public_6d42ffa _public_6d42ffa
#define public_6d43021 _public_6d43021
#define public_6d43056 _public_6d43056
#define public_6d4305e _public_6d4305e
#define public_6d43065 _public_6d43065
#define public_6d43097 _public_6d43097
#define public_6d4309e _public_6d4309e
#define public_6d430a2 _public_6d430a2
#define public_6d430a5 _public_6d430a5

PROC_DECLARE(0x6d42e72, internal_6d42e72, public_6d42e72);
extern "C" NAKED register_t __cdecl internal_6d42e72()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov edx, dword ptr ss : [ebp+0x10]
        push ebx
        push esi
        mov esi, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi]
        mov ebx, edx
        shr ebx, 8
        test cl, cl
        push edi
        mov byte ptr ss : [ebp+0xB], bl
        jne public_6d42f75
        mov cl, byte ptr ds : [esi+9]
        cmp cl, 8
        jne public_6d42eec
        mov ecx, dword ptr ss : [ebp+0xC]
        add ecx, eax
        test byte ptr ss : [ebp+0x14], 0x80
        lea edi, ds:[ecx+eax]
        je public_6d42ec8
        cmp eax, 1
        jbe public_6d42ec3
        lea ebx, ds:[eax-1]
        mov dword ptr ss : [ebp+8], ebx
        public_6d42eb5 : nop
        dec edi
        dec ecx
        mov byte ptr ds : [edi], dl
        mov bl, byte ptr ds : [ecx]
        dec edi
        dec dword ptr ss : [ebp+8]
        mov byte ptr ds : [edi], bl
        jne public_6d42eb5
        public_6d42ec3 : nop
        mov byte ptr ds : [edi-1], dl
        jmp public_6d42edd
        public_6d42ec8 : nop
        test eax, eax
        jbe public_6d42edd
        mov dword ptr ss : [ebp+8], eax
        public_6d42ecf : nop
        dec ecx
        mov bl, byte ptr ds : [ecx]
        dec edi
        mov byte ptr ds : [edi], bl
        dec edi
        dec dword ptr ss : [ebp+8]
        mov byte ptr ds : [edi], dl
        jne public_6d42ecf
        public_6d42edd : nop
        mov byte ptr ds : [esi+0xA], 2
        mov byte ptr ds : [esi+0xB], 0x10
        add eax, eax
        jmp public_6d430a2
        public_6d42eec : nop
        cmp cl, 0x10
        jne public_6d430a5
        test byte ptr ss : [ebp+0x14], 0x80
        mov ecx, dword ptr ss : [ebp+0xC]
        je public_6d42f35
        add ecx, eax
        mov dword ptr ss : [ebp-4], ecx
        add ecx, eax
        cmp eax, 1
        jbe public_6d42f2d
        lea edi, ds:[eax-1]
        mov dword ptr ss : [ebp+0x10], edi
        mov edi, dword ptr ss : [ebp-4]
        public_6d42f13 : nop
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec ecx
        mov byte ptr ds : [ecx], dl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        dec dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [ecx], bl
        mov bl, byte ptr ss : [ebp+0xB]
        jne public_6d42f13
        public_6d42f2d : nop
        dec ecx
        mov byte ptr ds : [ecx], bl
        mov byte ptr ds : [ecx-1], dl
        jmp public_6d42f65
        public_6d42f35 : nop
        lea edi, ds:[eax+ecx]
        mov dword ptr ss : [ebp+8], edi
        add edi, eax
        test eax, eax
        jbe public_6d42f65
        mov dword ptr ss : [ebp+0x10], eax
        public_6d42f44 : nop
        dec dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [ecx]
        dec edi
        dec dword ptr ss : [ebp+8]
        mov byte ptr ds : [edi], cl
        mov ecx, dword ptr ss : [ebp+8]
        mov cl, byte ptr ds : [ecx]
        dec edi
        mov byte ptr ds : [edi], cl
        dec edi
        mov byte ptr ds : [edi], bl
        dec edi
        dec dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [edi], dl
        jne public_6d42f44
        public_6d42f65 : nop
        mov byte ptr ds : [esi+0xA], 2
        mov byte ptr ds : [esi+0xB], 0x20
        shl eax, 2
        jmp public_6d430a2
        public_6d42f75 : nop
        cmp cl, 2
        jne public_6d430a5
        mov cl, byte ptr ds : [esi+9]
        cmp cl, 8
        jne public_6d42ffa
        test byte ptr ss : [ebp+0x14], 0x80
        mov ecx, dword ptr ss : [ebp+0xC]
        je public_6d42fc3
        lea edi, ds:[ecx+eax*2]
        mov ecx, eax
        add ecx, edi
        cmp eax, 1
        lea edi, ds:[ecx+eax]
        jbe public_6d42fbe
        lea ebx, ds:[eax-1]
        mov dword ptr ss : [ebp+8], ebx
        public_6d42fa4 : nop
        dec edi
        mov byte ptr ds : [edi], dl
        dec ecx
        mov bl, byte ptr ds : [ecx]
        dec edi
        mov byte ptr ds : [edi], bl
        dec ecx
        mov bl, byte ptr ds : [ecx]
        dec edi
        dec ecx
        mov byte ptr ds : [edi], bl
        mov bl, byte ptr ds : [ecx]
        dec edi
        dec dword ptr ss : [ebp+8]
        mov byte ptr ds : [edi], bl
        jne public_6d42fa4
        public_6d42fbe : nop
        mov byte ptr ds : [edi-1], dl
        jmp public_6d42fee
        public_6d42fc3 : nop
        lea ecx, ds:[ecx+eax*2]
        mov edi, eax
        add edi, ecx
        test eax, eax
        lea ecx, ds:[edi+eax]
        jbe public_6d42fee
        mov dword ptr ss : [ebp+8], eax
        public_6d42fd4 : nop
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec ecx
        dec dword ptr ss : [ebp+8]
        mov byte ptr ds : [ecx], dl
        jne public_6d42fd4
        public_6d42fee : nop
        mov byte ptr ds : [esi+0xB], 0x20
        shl eax, 2
        jmp public_6d4309e
        public_6d42ffa : nop
        cmp cl, 0x10
        jne public_6d430a5
        mov ecx, dword ptr ss : [ebp+0xC]
        lea ecx, ds:[ecx+eax*2]
        mov edi, eax
        add edi, ecx
        test byte ptr ss : [ebp+0x14], 0x80
        lea ecx, ds:[edi+eax]
        je public_6d4305e
        cmp eax, 1
        jbe public_6d43056
        lea ebx, ds:[eax-1]
        mov dword ptr ss : [ebp+0x10], ebx
        public_6d43021 : nop
        mov bl, byte ptr ss : [ebp+0xB]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec ecx
        mov byte ptr ds : [ecx], dl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        dec edi
        mov byte ptr ds : [ecx], bl
        mov bl, byte ptr ds : [edi]
        dec ecx
        dec dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [ecx], bl
        jne public_6d43021
        mov bl, byte ptr ss : [ebp+0xB]
        public_6d43056 : nop
        dec ecx
        mov byte ptr ds : [ecx], bl
        mov byte ptr ds : [ecx-1], dl
        jmp public_6d43097
        public_6d4305e : nop
        test eax, eax
        jbe public_6d43097
        mov dword ptr ss : [ebp+0x10], eax
        public_6d43065 : nop
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec edi
        mov bl, byte ptr ds : [edi]
        dec ecx
        mov byte ptr ds : [ecx], bl
        mov bl, byte ptr ss : [ebp+0xB]
        dec ecx
        mov byte ptr ds : [ecx], bl
        dec ecx
        dec dword ptr ss : [ebp+0x10]
        mov byte ptr ds : [ecx], dl
        jne public_6d43065
        public_6d43097 : nop
        mov byte ptr ds : [esi+0xB], 0x40
        shl eax, 3
        public_6d4309e : nop
        mov byte ptr ds : [esi+0xA], 4
        public_6d430a2 : nop
        mov dword ptr ds : [esi+4], eax
        public_6d430a5 : nop
        pop edi
        pop esi
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d42e72)
    }
}

#undef public_6d42eb5
#undef public_6d42ec3
#undef public_6d42ec8
#undef public_6d42ecf
#undef public_6d42edd
#undef public_6d42eec
#undef public_6d42f13
#undef public_6d42f2d
#undef public_6d42f35
#undef public_6d42f44
#undef public_6d42f65
#undef public_6d42f75
#undef public_6d42fa4
#undef public_6d42fbe
#undef public_6d42fc3
#undef public_6d42fd4
#undef public_6d42fee
#undef public_6d42ffa
#undef public_6d43021
#undef public_6d43056
#undef public_6d4305e
#undef public_6d43065
#undef public_6d43097
#undef public_6d4309e
#undef public_6d430a2
#undef public_6d430a5
