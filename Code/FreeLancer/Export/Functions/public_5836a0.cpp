#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f150);
CLANG_FORWARD_PROC_SYMBOL(public_410ca0);
CLANG_FORWARD_PROC_SYMBOL(public_4110c0);
CLANG_FORWARD_PROC_SYMBOL(public_411470);
CLANG_FORWARD_PROC_SYMBOL(public_4114f0);
CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_492250);
CLANG_FORWARD_PROC_SYMBOL(public_5836a0);
CLANG_FORWARD_PROC_SYMBOL(public_583b90);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5c42fb);

#define public_583938 _public_583938
#define public_583a50 _public_583a50
#define public_583a78 _public_583a78
#define public_583a7a _public_583a7a

PROC_DECLARE(0x5836a0, internal_5836a0, public_5836a0);
extern "C" NAKED register_t __cdecl internal_5836a0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c42fb @0x5836a2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c42fb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xAC
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x38], esi
        call public_59f860
        xor ebx, ebx
        lea ecx, ds:[esi+0x32C]
        mov dword ptr ss : [esp+0xC4], ebx
        call dword ptr ds : [public_5c6030]
        lea edi, ds:[esi+0x330]
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], edi
        call public_420d40
        lea ecx, ds:[edi+0x14]
        mov byte ptr ss : [esp+0xC4], 1
        call public_492250
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        lea ecx, ds:[esi+0x388]
        mov byte ptr ss : [esp+0xC4], 2
        call public_40f150
        mov al, byte ptr ss : [esp+0x17]
        mov byte ptr ds : [esi+0x44B], bl
        mov byte ptr ds : [esi+0x44A], bl
        mov byte ptr ds : [esi+0x449], bl
        mov byte ptr ds : [esi+0x448], bl
        mov byte ptr ds : [esi+0x4BF], bl
        mov byte ptr ds : [esi+0x4BE], bl
        mov byte ptr ds : [esi+0x4BD], bl
        mov byte ptr ds : [esi+0x4BC], bl
        mov byte ptr ds : [esi+0x4C3], bl
        mov byte ptr ds : [esi+0x4C2], bl
        mov byte ptr ds : [esi+0x4C1], bl
        mov byte ptr ds : [esi+0x4C0], bl
        lea edi, ds:[esi+0x4C8]
        push ebx
        mov byte ptr ds : [esi+0x4C7], bl
        mov byte ptr ds : [esi+0x4C6], bl
        mov byte ptr ds : [esi+0x4C5], bl
        mov byte ptr ds : [esi+0x4C4], bl
        push ebx
        mov ecx, edi
        mov byte ptr ss : [esp+0xCC], 3
        mov byte ptr ds : [edi], al
        call dword ptr ds : [public_5c6414]
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], ebx
        mov cl, byte ptr ss : [esp+0x17]
        mov byte ptr ds : [esi+0x538], cl
        mov dword ptr ds : [esi+0x53C], ebx
        mov dword ptr ds : [esi+0x540], ebx
        mov dword ptr ds : [esi+0x544], ebx
        mov dl, byte ptr ss : [esp+0x17]
        mov byte ptr ds : [esi+0x54C], dl
        mov dword ptr ds : [esi+0x550], ebx
        mov dword ptr ds : [esi+0x554], ebx
        mov dword ptr ds : [esi+0x558], ebx
        mov al, byte ptr ss : [esp+0x17]
        mov byte ptr ds : [esi+0x560], al
        mov dword ptr ds : [esi+0x564], ebx
        mov dword ptr ds : [esi+0x568], ebx
        mov dword ptr ds : [esi+0x56C], ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0xC4], 7
        mov dword ptr ds : [esi], offset public_5e4bcc
        mov dword ptr ds : [esi+0x7C], offset public_5e4bc0
        mov dword ptr ds : [esi+0x4D4], ebx
        mov dword ptr ds : [esi+0x4A4], ebx
        mov dword ptr ds : [esi+0x51C], 2
        call public_583b90
        mov dword ptr ss : [esp+0x18], ebx
        lea ecx, ds:[esi+0x488]
        mov eax, ebx
        mov edi, ecx
        mov dword ptr ds : [edi], eax
        mov ecx, ebx
        mov dword ptr ds : [edi+4], ecx
        mov edx, ebx
        mov dword ptr ds : [edi+8], edx
        lea edi, ds:[esi+0x470]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        lea edi, ds:[esi+0x47C]
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [esi+0x374], ebx
        mov dword ptr ds : [esi+0x370], ebx
        mov dword ptr ds : [esi+0x36C], ebx
        mov dword ptr ds : [esi+0x364], ebx
        mov dword ptr ds : [esi+0x360], ebx
        mov dword ptr ds : [esi+0x35C], ebx
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x378], eax
        mov dword ptr ds : [esi+0x368], eax
        mov dword ptr ds : [esi+0x358], eax
        mov edx, dword ptr ds : [public_679bb4]
        mov dword ptr ds : [esi+0x4BC], edx
        mov eax, dword ptr ds : [public_679bb4]
        mov dword ptr ds : [esi+0x4C0], eax
        mov cl, 0xFF
        mov byte ptr ss : [esp+0x10], 0xC3
        mov byte ptr ss : [esp+0x11], 0xB8
        mov byte ptr ss : [esp+0x12], 0x20
        mov byte ptr ss : [esp+0x13], cl
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[esi+0x4E4]
        mov ebp, eax
        mov eax, ebx
        mov dword ptr ss : [ebp], eax
        mov dword ptr ds : [esi+0x4C4], edx
        mov edx, ebx
        mov dword ptr ss : [ebp+4], edx
        mov edi, ebx
        mov dword ptr ss : [ebp+8], edi
        lea ebp, ds:[esi+0x4D8]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [ebp+4], edx
        mov byte ptr ss : [esp+0x10], bl
        mov byte ptr ss : [esp+0x11], bl
        mov byte ptr ss : [esp+0x12], bl
        mov byte ptr ss : [esp+0x13], cl
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ds : [esi+0x448], edx
        mov dword ptr ds : [esi+0x4B4], 0x41C80000
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [ebp+8], edi
        lea eax, ss:[esp+0x3E]
        mov edx, 8
        public_583938 : nop
        mov byte ptr ds : [eax+1], bl
        mov byte ptr ds : [eax], bl
        mov byte ptr ds : [eax-1], bl
        mov byte ptr ds : [eax-2], bl
        add eax, 4
        dec edx
        jne public_583938
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x5C], eax
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x60], edx
        mov dword ptr ss : [esp+0x20], 0xBF800000
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x64], eax
        mov dword ptr ss : [esp+0x18], 0xBF770A3D
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x68], edx
        mov dword ptr ss : [esp+0x1C], 0x3E849BA6
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], 0x3F770A3D
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0x70], edx
        mov byte ptr ss : [esp+0x10], cl
        mov byte ptr ss : [esp+0x11], cl
        mov byte ptr ss : [esp+0x12], cl
        mov byte ptr ss : [esp+0x13], cl
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x74], eax
        mov dword ptr ss : [esp+0x78], edx
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x7C], eax
        mov dword ptr ss : [esp+0x3C], edx
        mov dl, 0x46
        mov byte ptr ss : [esp+0x11], dl
        mov al, 0x64
        mov byte ptr ss : [esp+0x13], cl
        mov byte ptr ss : [esp+0x10], 0x32
        mov byte ptr ss : [esp+0x12], al
        mov edi, dword ptr ss : [esp+0x10]
        mov byte ptr ss : [esp+0x11], dl
        mov byte ptr ss : [esp+0x13], cl
        mov byte ptr ss : [esp+0x10], 0x32
        mov byte ptr ss : [esp+0x12], al
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x3C]
        lea edx, ss:[esp+0x5C]
        mov dword ptr ss : [esp+0x40], edi
        mov dword ptr ds : [esi+0x46C], 3
        mov dword ptr ss : [esp+0x44], eax
        xor ebp, ebp
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [esp+0x10], edx
        lea edi, ds:[esi+0x44C]
        lea esp, ss:[esp]
        public_583a50 : nop
        push 0xC8
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x34], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0xC4], 8
        je public_583a78
        push 0xFFFFFFFF
        mov ecx, eax
        call public_410ca0
        jmp public_583a7a
        public_583a78 : nop
        xor eax, eax
        public_583a7a : nop
        push ebx
        push 3
        mov ecx, eax
        mov byte ptr ss : [esp+0xCC], 7
        mov dword ptr ds : [edi], eax
        call public_4110c0
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x18], ecx
        fmul dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ds : [edi]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_5c75dc]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp+0x34]
        call public_411470
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [edi]
        push edx
        call public_4114f0
        mov ecx, dword ptr ds : [edi]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x24]
        add eax, 0xC
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+0x46C]
        inc ebp
        add edx, 4
        add edi, 4
        cmp ebp, eax
        mov dword ptr ss : [esp+0x24], edx
        jl public_583a50
        mov ecx, dword ptr ss : [esp+0xBC]
        pop edi
        mov byte ptr ds : [esi+0x55C], bl
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xB8
        ret 
        UNREACHABLE_TRAP(0x5836a0)
    }
}

#undef public_583938
#undef public_583a50
#undef public_583a78
#undef public_583a7a
