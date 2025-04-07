#include "zlib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_100069d0);
CLANG_FORWARD_PROC_SYMBOL(public_10006aa0);
CLANG_FORWARD_PROC_SYMBOL(public_10007bd0);
CLANG_FORWARD_PROC_SYMBOL(public_10007c30);

#define public_10007c67 _public_10007c67
#define public_10007c90 _public_10007c90
#define public_10007c95 _public_10007c95
#define public_10007c9e _public_10007c9e
#define public_10007ca7 _public_10007ca7
#define public_10007cb1 _public_10007cb1
#define public_10007cb3 _public_10007cb3
#define public_10007cf0 _public_10007cf0
#define public_10007cfd _public_10007cfd
#define public_10007d16 _public_10007d16
#define public_10007d27 _public_10007d27
#define public_10007d30 _public_10007d30
#define public_10007daf _public_10007daf
#define public_10007db2 _public_10007db2

PROC_DECLARE(0x10007c30, internal_10007c30, public_10007c30);
extern "C" NAKED register_t __cdecl internal_10007c30()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [eax+0xC]
        mov ebx, dword ptr ds : [eax]
        xor edx, edx
        or ebp, 0xFFFFFFFF
        xor eax, eax
        cmp ecx, edx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0xC], ebp
        mov dword ptr ds : [esi+0x1448], edx
        mov dword ptr ds : [esi+0x144C], 0x23D
        jle public_10007c9e
        public_10007c67 : nop
        cmp word ptr ds : [edi+eax*4], dx
        je public_10007c90
        mov ecx, dword ptr ds : [esi+0x1448]
        inc ecx
        mov dword ptr ds : [esi+0x1448], ecx
        mov dword ptr ds : [esi+ecx*4+0xB54], eax
        mov dword ptr ss : [esp+0xC], eax
        mov byte ptr ds : [eax+esi+0x1450], dl
        mov ebp, eax
        jmp public_10007c95
        public_10007c90 : nop
        mov word ptr ds : [edi+eax*4+2], dx
        public_10007c95 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, ecx
        jl public_10007c67
        public_10007c9e : nop
        cmp dword ptr ds : [esi+0x1448], 2
        jge public_10007cfd
        public_10007ca7 : nop
        cmp ebp, 2
        jge public_10007cb1
        inc ebp
        mov eax, ebp
        jmp public_10007cb3
        public_10007cb1 : nop
        xor eax, eax
        public_10007cb3 : nop
        mov ecx, dword ptr ds : [esi+0x1448]
        inc ecx
        mov dword ptr ds : [esi+0x1448], ecx
        mov dword ptr ds : [esi+ecx*4+0xB54], eax
        mov word ptr ds : [edi+eax*4], 1
        mov byte ptr ds : [esi+eax+0x1450], dl
        mov ecx, dword ptr ds : [esi+0x16A0]
        dec ecx
        cmp ebx, edx
        mov dword ptr ds : [esi+0x16A0], ecx
        je public_10007cf0
        movzx eax, word ptr ds : [ebx+eax*4+2]
        sub dword ptr ds : [esi+0x16A4], eax
        public_10007cf0 : nop
        cmp dword ptr ds : [esi+0x1448], 2
        jl public_10007ca7
        mov dword ptr ss : [esp+0xC], ebp
        public_10007cfd : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], ebp
        mov eax, dword ptr ds : [esi+0x1448]
        cdq 
        sub eax, edx
        mov ebx, eax
        sar ebx, 1
        cmp ebx, 1
        jl public_10007d27
        public_10007d16 : nop
        push ebx
        mov eax, esi
        call public_100069d0
        add esp, 4
        dec ebx
        cmp ebx, 1
        jge public_10007d16
        public_10007d27 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        jmp public_10007d30
        lea ecx, ds:[ecx]
        public_10007d30 : nop
        mov eax, dword ptr ds : [esi+0x1448]
        mov edx, dword ptr ds : [esi+eax*4+0xB54]
        mov ebx, dword ptr ds : [esi+0xB58]
        dec eax
        mov dword ptr ds : [esi+0x1448], eax
        push 1
        mov eax, esi
        mov dword ptr ds : [esi+0xB58], edx
        call public_100069d0
        mov edx, dword ptr ds : [esi+0x144C]
        mov eax, dword ptr ds : [esi+0xB58]
        add esp, 4
        dec edx
        mov dword ptr ds : [esi+0x144C], edx
        mov ecx, edx
        mov dword ptr ds : [esi+ecx*4+0xB54], ebx
        mov ecx, dword ptr ds : [esi+0x144C]
        dec ecx
        mov dword ptr ds : [esi+0x144C], ecx
        mov dword ptr ds : [esi+ecx*4+0xB54], eax
        mov cx, word ptr ds : [edi+eax*4]
        add cx, word ptr ds : [edi+ebx*4]
        mov word ptr ds : [edi+ebp*4], cx
        mov cl, byte ptr ds : [esi+eax+0x1450]
        mov dl, byte ptr ds : [esi+ebx+0x1450]
        cmp dl, cl
        jb public_10007daf
        movzx ecx, dl
        jmp public_10007db2
        public_10007daf : nop
        movzx ecx, cl
        public_10007db2 : nop
        inc cl
        mov byte ptr ds : [esi+ebp+0x1450], cl
        mov word ptr ds : [edi+eax*4+2], bp
        mov word ptr ds : [edi+ebx*4+2], bp
        mov dword ptr ds : [esi+0xB58], ebp
        push 1
        mov eax, esi
        inc ebp
        call public_100069d0
        mov eax, dword ptr ds : [esi+0x1448]
        add esp, 4
        cmp eax, 2
        jge public_10007d30
        mov eax, dword ptr ds : [esi+0x144C]
        mov edx, dword ptr ds : [esi+0xB58]
        dec eax
        mov dword ptr ds : [esi+0x144C], eax
        mov dword ptr ds : [esi+eax*4+0xB54], edx
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, esi
        call public_10006aa0
        mov ebx, dword ptr ss : [esp+0xC]
        lea edx, ds:[esi+0xB34]
        call public_10007bd0
        pop edi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x10007c30)
    }
}

#undef public_10007c67
#undef public_10007c90
#undef public_10007c95
#undef public_10007c9e
#undef public_10007ca7
#undef public_10007cb1
#undef public_10007cb3
#undef public_10007cf0
#undef public_10007cfd
#undef public_10007d16
#undef public_10007d27
#undef public_10007d30
#undef public_10007daf
#undef public_10007db2
