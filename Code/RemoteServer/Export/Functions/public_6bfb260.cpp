#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bfb260);
CLANG_FORWARD_PROC_SYMBOL(public_6c09aaa);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bfb296 _public_6bfb296
#define public_6bfb298 _public_6bfb298
#define public_6bfb2a0 _public_6bfb2a0
#define public_6bfb2a5 _public_6bfb2a5
#define public_6bfb2b1 _public_6bfb2b1
#define public_6bfb2d2 _public_6bfb2d2
#define public_6bfb2da _public_6bfb2da
#define public_6bfb2e4 _public_6bfb2e4
#define public_6bfb2f0 _public_6bfb2f0
#define public_6bfb2fc _public_6bfb2fc
#define public_6bfb302 _public_6bfb302
#define public_6bfb320 _public_6bfb320
#define public_6bfb328 _public_6bfb328
#define public_6bfb332 _public_6bfb332
#define public_6bfb36e _public_6bfb36e
#define public_6bfb38b _public_6bfb38b
#define public_6bfb3b0 _public_6bfb3b0
#define public_6bfb3bc _public_6bfb3bc
#define public_6bfb3c6 _public_6bfb3c6
#define public_6bfb3d8 _public_6bfb3d8
#define public_6bfb3e0 _public_6bfb3e0
#define public_6bfb3e6 _public_6bfb3e6
#define public_6bfb3f0 _public_6bfb3f0
#define public_6bfb3fb _public_6bfb3fb
#define public_6bfb408 _public_6bfb408
#define public_6bfb420 _public_6bfb420
#define public_6bfb428 _public_6bfb428
#define public_6bfb432 _public_6bfb432
#define public_6bfb440 _public_6bfb440
#define public_6bfb44f _public_6bfb44f
#define public_6bfb460 _public_6bfb460
#define public_6bfb46b _public_6bfb46b
#define public_6bfb46e _public_6bfb46e

PROC_DECLARE(0x6bfb260, internal_6bfb260, public_6bfb260);
extern "C" NAKED register_t __cdecl internal_6bfb260()
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
        jae public_6bfb38b
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        je public_6bfb296
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ebp, ecx
        jb public_6bfb298
        public_6bfb296 : nop
        mov ecx, ebp
        public_6bfb298 : nop
        test edx, edx
        jne public_6bfb2a0
        xor eax, eax
        jmp public_6bfb2a5
        public_6bfb2a0 : nop
        sub eax, edx
        sar eax, 2
        public_6bfb2a5 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x14], eax
        jge public_6bfb2b1
        xor eax, eax
        public_6bfb2b1 : nop
        lea edx, ds:[eax*4]
        push edx
        call public_6c09d26
        mov ebx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        mov ecx, eax
        mov eax, dword ptr ds : [edi+4]
        add esp, 4
        cmp eax, ebx
        je public_6bfb2e4
        public_6bfb2d2 : nop
        test ecx, ecx
        je public_6bfb2da
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        public_6bfb2da : nop
        add eax, 4
        add ecx, 4
        cmp eax, ebx
        jne public_6bfb2d2
        public_6bfb2e4 : nop
        test ebp, ebp
        mov eax, ecx
        jbe public_6bfb302
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, ebp
        public_6bfb2f0 : nop
        test eax, eax
        je public_6bfb2fc
        mov edi, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6bfb2fc : nop
        add eax, 4
        dec edx
        jne public_6bfb2f0
        public_6bfb302 : nop
        mov edi, dword ptr ds : [edi+8]
        cmp ebx, edi
        lea esi, ds:[ebp*4]
        lea edx, ds:[esi+ecx]
        je public_6bfb332
        mov eax, edx
        sub eax, esi
        sub eax, ecx
        add eax, ebx
        nop 
        lea esp, ss:[esp]
        public_6bfb320 : nop
        test edx, edx
        je public_6bfb328
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [edx], ecx
        public_6bfb328 : nop
        add eax, 4
        add edx, 4
        cmp eax, edi
        jne public_6bfb320
        public_6bfb332 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6c09aaa
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x18]
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [esi+0xC], ecx
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        test ecx, ecx
        jne public_6bfb36e
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
        public_6bfb36e : nop
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
        public_6bfb38b : nop
        mov edx, dword ptr ss : [esp+0x1C]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        cmp ecx, ebp
        jae public_6bfb408
        cmp edx, eax
        lea ebx, ds:[ebp*4]
        lea esi, ds:[ebx+edx]
        je public_6bfb3c6
        mov ecx, esi
        sub ecx, ebx
        lea esp, ss:[esp]
        public_6bfb3b0 : nop
        test esi, esi
        je public_6bfb3bc
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ss : [esp+0x10]
        public_6bfb3bc : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6bfb3b0
        public_6bfb3c6 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x24]
        mov ecx, eax
        sub ecx, edx
        sar ecx, 2
        sub ebp, ecx
        je public_6bfb3e6
        public_6bfb3d8 : nop
        test eax, eax
        je public_6bfb3e0
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], ecx
        public_6bfb3e0 : nop
        add eax, 4
        dec ebp
        jne public_6bfb3d8
        public_6bfb3e6 : nop
        mov ecx, dword ptr ds : [edi+8]
        cmp edx, ecx
        mov eax, edx
        je public_6bfb3fb
        nop 
        public_6bfb3f0 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [eax], edx
        add eax, 4
        cmp eax, ecx
        jne public_6bfb3f0
        public_6bfb3fb : nop
        add dword ptr ds : [edi+8], ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        public_6bfb408 : nop
        test ebp, ebp
        jbe public_6bfb46e
        shl ebp, 2
        mov ecx, eax
        sub ecx, ebp
        cmp ecx, eax
        mov esi, eax
        je public_6bfb432
        lea esp, ss:[esp]
        public_6bfb420 : nop
        test esi, esi
        je public_6bfb428
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi], ebx
        public_6bfb428 : nop
        add ecx, 4
        add esi, 4
        cmp ecx, eax
        jne public_6bfb420
        public_6bfb432 : nop
        mov ecx, dword ptr ds : [edi+8]
        mov eax, ecx
        sub eax, ebp
        cmp edx, eax
        je public_6bfb44f
        lea ecx, ds:[ecx]
        public_6bfb440 : nop
        mov esi, dword ptr ds : [eax-4]
        sub eax, 4
        sub ecx, 4
        cmp eax, edx
        mov dword ptr ds : [ecx], esi
        jne public_6bfb440
        public_6bfb44f : nop
        lea ecx, ds:[edx+ebp]
        cmp edx, ecx
        mov eax, edx
        je public_6bfb46b
        mov edx, dword ptr ss : [esp+0x24]
        lea esp, ss:[esp]
        public_6bfb460 : nop
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        add eax, 4
        cmp eax, ecx
        jne public_6bfb460
        public_6bfb46b : nop
        add dword ptr ds : [edi+8], ebp
        public_6bfb46e : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x6bfb260)
    }
}

#undef public_6bfb296
#undef public_6bfb298
#undef public_6bfb2a0
#undef public_6bfb2a5
#undef public_6bfb2b1
#undef public_6bfb2d2
#undef public_6bfb2da
#undef public_6bfb2e4
#undef public_6bfb2f0
#undef public_6bfb2fc
#undef public_6bfb302
#undef public_6bfb320
#undef public_6bfb328
#undef public_6bfb332
#undef public_6bfb36e
#undef public_6bfb38b
#undef public_6bfb3b0
#undef public_6bfb3bc
#undef public_6bfb3c6
#undef public_6bfb3d8
#undef public_6bfb3e0
#undef public_6bfb3e6
#undef public_6bfb3f0
#undef public_6bfb3fb
#undef public_6bfb408
#undef public_6bfb420
#undef public_6bfb428
#undef public_6bfb432
#undef public_6bfb440
#undef public_6bfb44f
#undef public_6bfb460
#undef public_6bfb46b
#undef public_6bfb46e
