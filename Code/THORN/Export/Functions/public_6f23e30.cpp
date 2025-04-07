#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f23e66 _public_6f23e66
#define public_6f23e68 _public_6f23e68
#define public_6f23e70 _public_6f23e70
#define public_6f23e75 _public_6f23e75
#define public_6f23e81 _public_6f23e81
#define public_6f23ea2 _public_6f23ea2
#define public_6f23eaa _public_6f23eaa
#define public_6f23eb4 _public_6f23eb4
#define public_6f23ec0 _public_6f23ec0
#define public_6f23ecc _public_6f23ecc
#define public_6f23ed2 _public_6f23ed2
#define public_6f23ef0 _public_6f23ef0
#define public_6f23ef8 _public_6f23ef8
#define public_6f23f02 _public_6f23f02
#define public_6f23f3e _public_6f23f3e
#define public_6f23f5b _public_6f23f5b
#define public_6f23f80 _public_6f23f80
#define public_6f23f8c _public_6f23f8c
#define public_6f23f96 _public_6f23f96
#define public_6f23fa8 _public_6f23fa8
#define public_6f23fb0 _public_6f23fb0
#define public_6f23fb6 _public_6f23fb6
#define public_6f23fc0 _public_6f23fc0
#define public_6f23fcb _public_6f23fcb
#define public_6f23fd8 _public_6f23fd8
#define public_6f23ff0 _public_6f23ff0
#define public_6f23ff8 _public_6f23ff8
#define public_6f24002 _public_6f24002
#define public_6f24010 _public_6f24010
#define public_6f2401f _public_6f2401f
#define public_6f24030 _public_6f24030
#define public_6f2403b _public_6f2403b
#define public_6f2403e _public_6f2403e

PROC_DECLARE(0x6f23e30, internal_6f23e30, public_6f23e30);
extern "C" NAKED register_t __cdecl internal_6f23e30()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+8]
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 2
        cmp ecx, ebp
        mov dword ptr ss : [esp+0x10], edi
        jae public_6f23f5b
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6f23e66
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_6f23e68
        public_6f23e66 : nop
        mov ecx, ebp
        public_6f23e68 : nop
        test edx, edx
        jne public_6f23e70
        xor eax, eax
        jmp public_6f23e75
        public_6f23e70 : nop
        sub eax, edx
        sar eax, 2
        public_6f23e75 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6f23e81
        xor eax, eax
        public_6f23e81 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6f57e9c
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6f23eb4
        public_6f23ea2 : nop
        test ecx, ecx
        je public_6f23eaa
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_6f23eaa : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6f23ea2
        public_6f23eb4 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6f23ed2
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6f23ec0 : nop
        test eax, eax
        je public_6f23ecc
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6f23ecc : nop
        add eax, 4
        dec edx
        jne public_6f23ec0
        public_6f23ed2 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_6f23f02
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_6f23ef0 : nop
        test edx, edx
        je public_6f23ef8
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6f23ef8 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6f23ef0
        public_6f23f02 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6f57e26
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6f23f3e
        xor eax, eax
        mov eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f23f3e : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 2
        add eax, ebp
        pop edi
        lea eax, ds:[edx+eax*4]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], edx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f23f5b : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6f23fd8
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_6f23f96
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_6f23f80 : nop
        test esi, esi
        je public_6f23f8c
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6f23f8c : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6f23f80
        public_6f23f96 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_6f23fb6
        public_6f23fa8 : nop
        test eax, eax
        je public_6f23fb0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_6f23fb0 : nop
        add eax, 4
        dec ebp
        jne public_6f23fa8
        public_6f23fb6 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_6f23fcb
        nop 
        public_6f23fc0 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6f23fc0
        public_6f23fcb : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6f23fd8 : nop
        test ebp, ebp
        jbe public_6f2403e
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_6f24002
        lea esp, ss:[esp]
        public_6f23ff0 : nop
        test esi, esi
        je public_6f23ff8
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_6f23ff8 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6f23ff0
        public_6f24002 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6f2401f
        lea ecx, ds:[ecx]
        public_6f24010 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6f24010
        public_6f2401f : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6f2403b
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6f24030 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6f24030
        public_6f2403b : nop
        add dword ptr ds : [edi+8], ebp
        public_6f2403e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6f23e30)
    }
}

#undef public_6f23e66
#undef public_6f23e68
#undef public_6f23e70
#undef public_6f23e75
#undef public_6f23e81
#undef public_6f23ea2
#undef public_6f23eaa
#undef public_6f23eb4
#undef public_6f23ec0
#undef public_6f23ecc
#undef public_6f23ed2
#undef public_6f23ef0
#undef public_6f23ef8
#undef public_6f23f02
#undef public_6f23f3e
#undef public_6f23f5b
#undef public_6f23f80
#undef public_6f23f8c
#undef public_6f23f96
#undef public_6f23fa8
#undef public_6f23fb0
#undef public_6f23fb6
#undef public_6f23fc0
#undef public_6f23fcb
#undef public_6f23fd8
#undef public_6f23ff0
#undef public_6f23ff8
#undef public_6f24002
#undef public_6f24010
#undef public_6f2401f
#undef public_6f24030
#undef public_6f2403b
#undef public_6f2403e
