#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f150);
CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_48de20);
CLANG_FORWARD_PROC_SYMBOL(public_48e600);
CLANG_FORWARD_PROC_SYMBOL(public_4a2f10);
CLANG_FORWARD_PROC_SYMBOL(public_55dec0);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_59f860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc659);

#define public_48e469 _public_48e469
#define public_48e533 _public_48e533
#define public_48e552 _public_48e552
#define public_48e571 _public_48e571

PROC_DECLARE(0x48de20, internal_48de20, public_48de20);
extern "C" NAKED register_t __cdecl internal_48de20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc659 @0x48de22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc659
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x94
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x20], esi
        call public_59f860
        xor ebx, ebx
        mov dword ptr ss : [esp+0xAC], ebx
        mov dword ptr ds : [esi+0x32C], offset public_5cbed8
        lea ecx, ds:[esi+0x330]
        mov byte ptr ss : [esp+0xAC], 1
        call public_55dec0
        lea edi, ds:[esi+0x350]
        mov ecx, edi
        mov byte ptr ss : [esp+0xAC], 2
        call public_420d40
        mov ebp, 0x3F800000
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi+0x18], ebp
        mov dword ptr ds : [edi+0x14], ebp
        mov dword ptr ds : [edi+0x24], ebp
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        lea edi, ds:[esi+0x378]
        mov ecx, edi
        mov byte ptr ss : [esp+0xAC], 3
        call public_420d40
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi+0x18], ebp
        mov dword ptr ds : [edi+0x14], ebp
        mov dword ptr ds : [edi+0x24], ebp
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        lea edi, ds:[esi+0x3A0]
        mov ecx, edi
        mov byte ptr ss : [esp+0xAC], 4
        call public_420d40
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi+0x18], ebp
        mov dword ptr ds : [edi+0x14], ebp
        mov dword ptr ds : [edi+0x24], ebp
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        mov al, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ss : [esp+0xB0], 5
        mov byte ptr ds : [esi+0x3FC], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [esi+0x400], eax
        mov dword ptr ds : [esi+0x404], ebx
        mov cl, byte ptr ss : [esp+0x17]
        mov dword ptr ds : [esi+0x7E4], 0x459C4000
        mov dword ptr ds : [esi+0x7E8], 0x458CA000
        push 0xC
        mov byte ptr ss : [esp+0xB4], 6
        mov byte ptr ds : [esi+0x80C], cl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 8
        mov dword ptr ds : [esi+0x810], eax
        mov dword ptr ds : [esi+0x814], ebx
        mov dl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x848], dl
        mov dword ptr ds : [esi+0x84C], ebx
        mov dword ptr ds : [esi+0x850], ebx
        mov dword ptr ds : [esi+0x854], ebx
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x858], al
        mov dword ptr ds : [esi+0x85C], ebx
        mov dword ptr ds : [esi+0x860], ebx
        mov dword ptr ds : [esi+0x864], ebx
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [esi+0x868], cl
        mov dword ptr ds : [esi+0x86C], ebx
        mov dword ptr ds : [esi+0x870], ebx
        mov dword ptr ds : [esi+0x874], ebx
        lea edx, ss:[esp+0x13]
        push edx
        lea eax, ss:[esp+0x16]
        lea edi, ds:[esi+0x880]
        push eax
        mov ecx, edi
        mov byte ptr ss : [esp+0xB4], 0xA
        call public_4a2f10
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x14], eax
        lea edi, ds:[esi+0x89C]
        mov ecx, edi
        mov byte ptr ss : [esp+0xAC], 0xB
        call public_420d40
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi+0x18], ebp
        mov dword ptr ds : [edi+0x14], ebp
        mov dword ptr ds : [edi+0x24], ebp
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
/*FIXUP push offset _public_59ef20 @0x48e01d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_59ef20
/*FIXUP push offset _public_48e600 @0x48e022*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_48e600
        push 0xA
        push 0x28
        lea ecx, ds:[esi+0x930]
        push ecx
        mov byte ptr ss : [esp+0xC0], 0xC
        call public_5b7fba
        mov dl, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [esi+0xB58], dl
        mov dword ptr ds : [esi+0xB5C], ebx
        mov dword ptr ds : [esi+0xB60], ebx
        mov dword ptr ds : [esi+0xB64], ebx
        mov al, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [esi+0xB8C], al
        mov dword ptr ds : [esi+0xB90], ebx
        mov dword ptr ds : [esi+0xB94], ebx
        mov dword ptr ds : [esi+0xB98], ebx
        lea edi, ds:[esi+0xC1C]
        mov ecx, edi
        mov byte ptr ss : [esp+0xAC], 0xF
        call public_420d40
        mov dword ptr ds : [edi+0x20], ebp
        mov dword ptr ds : [edi+0x1C], ebp
        mov dword ptr ds : [edi+0x18], ebp
        mov dword ptr ds : [edi+0x14], ebp
        mov dword ptr ds : [edi+0x24], ebp
        mov dword ptr ds : [edi], offset public_5d2efc
        mov dword ptr ds : [edi+0x10], 0xFFFFFFFF
        lea ecx, ds:[esi+0xC80]
        mov byte ptr ss : [esp+0xAC], 0x10
        call public_40f150
        mov cl, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [esi+0xFD4], cl
        mov dword ptr ds : [esi+0xFD8], ebx
        mov dword ptr ds : [esi+0xFDC], ebx
        mov dword ptr ds : [esi+0xFE0], ebx
        mov dl, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [esi+0xFE4], dl
        mov dword ptr ds : [esi+0xFE8], ebx
        mov dword ptr ds : [esi+0xFEC], ebx
        mov dword ptr ds : [esi+0xFF0], ebx
        mov al, byte ptr ss : [esp+0x12]
        mov byte ptr ds : [esi+0xFF4], al
        mov dword ptr ds : [esi+0xFF8], ebx
        mov dword ptr ds : [esi+0xFFC], ebx
        mov dword ptr ds : [esi+0x1000], ebx
        mov dword ptr ds : [esi], offset public_5d2f84
        mov dword ptr ds : [esi+0x7C], offset public_5d2f74
        mov dword ptr ds : [esi+0x32C], offset public_5d2f6c
        mov dword ptr ds : [esi+0x330], offset public_5d2f60
        mov edx, ebx
        lea ecx, ds:[esi+0x3C8]
        mov dword ptr ds : [ecx], edx
        mov eax, ebx
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ds : [esi+0x3F4], ebp
        mov dword ptr ds : [esi+0x3E4], ebp
        mov dword ptr ds : [esi+0x3D4], ebp
        mov dword ptr ds : [esi+0x3F0], ebx
        mov dword ptr ds : [esi+0x3EC], ebx
        mov dword ptr ds : [esi+0x3E8], ebx
        mov dword ptr ds : [esi+0x3E0], ebx
        mov dword ptr ds : [esi+0x3DC], ebx
        mov dword ptr ds : [esi+0x3D8], ebx
        or eax, 0xFFFFFFFF
        mov dword ptr ds : [esi+0x354], eax
        mov dword ptr ds : [esi+0x37C], eax
        mov dword ptr ds : [esi+0x3A4], eax
        mov dword ptr ds : [esi+0x838], eax
        mov dword ptr ds : [esi+0xAF0], eax
        xor eax, eax
        mov dword ptr ds : [esi+0x3F8], ebp
        mov byte ptr ds : [esi+0x408], bl
        mov dword ptr ds : [esi+0x4B4], ebx
        mov dword ptr ds : [esi+0x7D0], 1
        mov byte ptr ds : [esi+0x7D4], bl
        mov byte ptr ds : [esi+0x7D5], bl
        mov byte ptr ds : [esi+0x818], bl
        mov byte ptr ds : [esi+0x478], bl
        mov dword ptr ds : [esi+0x878], ebx
        mov byte ptr ds : [esi+0x87C], bl
        mov byte ptr ds : [esi+0x87D], bl
        mov dword ptr ds : [esi+0x7E0], ebx
        mov byte ptr ds : [esi+0x92C], bl
        mov dword ptr ds : [esi+0xAF4], ebx
        mov ecx, 0x63
        lea edi, ds:[esi+0x4B8]
        rep stosd
        mov ecx, 0x63
        lea edi, ds:[esi+0x644]
        rep stosd
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x18], eax
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[esi+0x81C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x1C], 0xBF35C28F
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+8], ecx
        lea edx, ds:[esi+0x828]
        mov eax, ebx
        mov dword ptr ds : [edx], eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], 0xBF0CCCCC
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx+4], ecx
        mov byte ptr ss : [esp+0xAC], 0x14
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ds : [esi+0xB9C], ebx
        lea ecx, ds:[esi+0x430]
        mov edx, ebp
        mov dword ptr ds : [ecx], edx
        mov eax, ebp
        mov dword ptr ds : [ecx+4], eax
        mov edx, ebx
        mov dword ptr ds : [ecx+8], edx
        mov ecx, ebx
        lea eax, ds:[esi+0x424]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x14], 0xBE6F9DB2
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], ebp
        lea edx, ds:[esi+0x40C]
        mov dword ptr ds : [edx], eax
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x18], 0xBE6F9DB2
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx+4], ecx
        mov eax, ebx
        mov dword ptr ds : [edx+8], eax
        mov dword ptr ss : [esp+0x14], 0x3EEF9DB2
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[esi+0x418]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x18], 0x3EEF9DB2
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], eax
        mov edx, ebx
        mov dword ptr ds : [ecx+8], edx
        or eax, 0xFFFFFFFF
        mov ecx, 0x47DAC000
        mov dword ptr ds : [esi+0x4A8], ecx
        mov dword ptr ds : [esi+0x4AC], ecx
        lea ecx, ds:[esi+0xD54]
        mov dword ptr ds : [esi+0xBB0], ebx
        mov byte ptr ds : [esi+0xBB4], bl
        mov dword ptr ds : [esi+0x4B0], 0x2020BDFF
        mov byte ptr ds : [esi+0x834], bl
        mov byte ptr ds : [esi+0x87E], bl
        mov byte ptr ds : [esi+0x898], bl
        mov dword ptr ds : [esi+0x8A0], eax
        mov byte ptr ds : [esi+0x8C4], bl
        mov byte ptr ds : [esi+0x8D4], bl
        mov byte ptr ds : [esi+0xB48], bl
        mov byte ptr ds : [esi+0xBC0], bl
        mov dword ptr ds : [esi+0xBC4], ebx
        mov dword ptr ds : [esi+0xBC8], eax
        mov dword ptr ds : [esi+0x4A0], ebp
        mov byte ptr ds : [esi+0xBCC], 1
        mov dword ptr ds : [esi+0xC20], eax
        mov byte ptr ds : [esi+0xC68], bl
        mov byte ptr ds : [public_6720a8], bl
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], edx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov ecx, 0xBF800000
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [esi+0xC6C], ebx
        mov dword ptr ds : [esi+0xC70], ebx
        mov dword ptr ds : [esi+0xC74], ebx
        mov dword ptr ds : [esi+0xC78], ebx
        mov dword ptr ds : [esi+0xC7C], eax
        mov dword ptr ds : [esi+0xD60], ecx
        mov dword ptr ds : [esi+0xD64], ebx
        mov dword ptr ds : [esi+0xD68], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        lea edx, ds:[esi+0xECC]
        mov edi, ebx
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [edx+8], edi
        lea edx, ds:[esi+0xEF0]
        mov dword ptr ds : [edx], edi
        mov dword ptr ds : [edx+4], edi
        mov dword ptr ds : [esi+0xED8], ecx
        mov dword ptr ds : [esi+0xEDC], ebx
        mov dword ptr ss : [esp+0x14], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [edx+8], edi
        mov dword ptr ds : [esi+0xEFC], ecx
        mov dword ptr ds : [esi+0xF00], ebx
        mov dword ptr ds : [esi+0xF04], eax
        mov dword ptr ds : [esi+0xF08], eax
        mov byte ptr ds : [esi+0xF24], bl
        call dword ptr ds : [public_5c60d0]
        test al, al
        jne public_48e469
        mov ecx, dword ptr ds : [public_67ecd0]
        push 4
        lea edx, ss:[esp+0x28]
        push edx
        mov edx, dword ptr ds : [public_673344]
        mov dword ptr ss : [esp+0x2C], ebx
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x12C]
        public_48e469 : nop
        push 0x6000
        call public_5b7e84
        push 0x1800
        mov dword ptr ds : [esi+0xD40], eax
        call public_5b7e84
        push 0x9000
        mov dword ptr ds : [esi+0xD44], eax
        mov dword ptr ds : [esi+0xD48], ebx
        mov dword ptr ds : [esi+0xD4C], ebx
        call public_5b7e84
        push 0x2400
        mov dword ptr ds : [esi+0xD6C], eax
        call public_5b7e84
        mov dword ptr ds : [esi+0xD70], eax
        mov dword ptr ds : [esi+0xD74], ebx
        mov dword ptr ds : [esi+0xEBC], ebx
        mov dword ptr ds : [esi+0xEC4], ebx
        mov dword ptr ds : [esi+0xF10], ebx
        mov eax, dword ptr ds : [public_5d2ecc]
        push 0x17700
        mov dword ptr ds : [esi+0xEC0], eax
        call public_5b7e84
        push 0x8CA0
        mov dword ptr ds : [esi+0xEE0], eax
        call public_5b7e84
        mov dword ptr ds : [esi+0xEE4], eax
        mov dword ptr ds : [esi+0xEE8], ebx
        mov dword ptr ds : [esi+0xEEC], ebx
        mov ecx, dword ptr ds : [public_5d2ed0]
        mov dword ptr ds : [esi+0xF0C], ecx
        mov eax, dword ptr ds : [public_6720ac]
        add esp, 0x18
        cmp eax, ebx
        jne public_48e533
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6720ac @0x48e526*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720ac
/*FIXUP push offset public_5d2f44 @0x48e52b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2f44
        push eax
        call dword ptr ds : [ecx]
        public_48e533 : nop
        cmp dword ptr ds : [public_6720b0], ebx
        jne public_48e552
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6720b0 @0x48e545*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720b0
/*FIXUP push offset public_5d2f30 @0x48e54a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2f30
        push eax
        call dword ptr ds : [ecx]
        public_48e552 : nop
        cmp dword ptr ds : [public_6720b4], ebx
        jne public_48e571
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
/*FIXUP push offset public_6720b4 @0x48e564*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6720b4
/*FIXUP push offset public_5d2f20 @0x48e569*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2f20
        push eax
        call dword ptr ds : [ecx]
        public_48e571 : nop
        mov edi, dword ptr ds : [public_5c63e4]
/*FIXUP push offset public_5d2f18 @0x48e577*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2f18
        call edi
/*FIXUP push offset public_5d2f10 @0x48e57e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2f10
        mov dword ptr ds : [esi+0xF28], eax
        call edi
/*FIXUP push offset public_5d2f08 @0x48e58b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2f08
        mov dword ptr ds : [esi+0xF2C], eax
        call edi
/*FIXUP push offset public_5d2f00 @0x48e598*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d2f00
        mov dword ptr ds : [esi+0xF30], eax
        call edi
        mov ecx, dword ptr ss : [esp+0xB4]
        add esp, 0x10
        mov dword ptr ds : [esi+0xF34], eax
        mov dword ptr ds : [esi+0xF44], ebx
        mov dword ptr ds : [esi+0xF48], ebp
        mov byte ptr ds : [public_6720c9], bl
        pop edi
        mov byte ptr ds : [esi+0x1004], bl
        mov dword ptr ds : [esi+0x1008], ebx
        mov byte ptr ds : [esi+0xFD0], 1
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA0
        ret 
        UNREACHABLE_TRAP(0x48de20)
    }
}

#undef public_48e469
#undef public_48e533
#undef public_48e552
#undef public_48e571
