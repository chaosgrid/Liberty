#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f150);
CLANG_FORWARD_PROC_SYMBOL(public_40f8c0);
CLANG_FORWARD_PROC_SYMBOL(public_40fb60);
CLANG_FORWARD_PROC_SYMBOL(public_40fd60);
CLANG_FORWARD_PROC_SYMBOL(public_420d10);
CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_59aca0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7fba);
CLANG_FORWARD_JUMP_SYMBOL(public_5c4c96);

#define public_59ad51 _public_59ad51
#define public_59ad86 _public_59ad86

PROC_DECLARE(0x59aca0, internal_59aca0, public_59aca0);
extern "C" NAKED register_t __cdecl internal_59aca0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c4c96 @0x59aca2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c4c96
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        push edi
        mov dword ptr ds : [esi+0xC], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+4], ebx
        lea edi, ds:[esi+0x3C]
        mov ecx, edi
        mov dword ptr ss : [esp+0x10], esi
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x18], bl
        call public_4215b0
        mov dword ptr ds : [edi+0x2C], ebx
        mov dword ptr ds : [edi+0x28], ebx
        mov dword ptr ds : [edi+0x24], ebx
        mov al, byte ptr ds : [esi+0x6C]
        and al, 0xF8
        or al, 8
        mov dword ptr ds : [esi], offset public_5d5544
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x70], ebx
        mov dword ptr ds : [esi+0x38], ebx
        mov dword ptr ds : [esi+0x74], ebx
        mov dword ptr ds : [esi+0x78], ebx
        mov byte ptr ds : [esi+0x6C], al
        inc dword ptr ds : [public_67dcd4]
        mov dl, byte ptr ss : [esp+0xF]
        lea ecx, ds:[esi+0x7C]
        push ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov byte ptr ds : [ecx], dl
        call dword ptr ds : [public_5c7084]
/*FIXUP push offset _public_420d10 @0x59ad1e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d10
/*FIXUP push offset _public_420d40 @0x59ad23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_420d40
        push 4
        lea edi, ds:[esi+0x8C]
        push 0x10
        lea eax, ds:[edi+4]
        push eax
        mov byte ptr ss : [esp+0x34], 1
        mov dword ptr ss : [esp+0x28], edi
        call public_5b7fba
        mov byte ptr ss : [esp+0x20], 2
        lea eax, ds:[edi+0x44]
        mov ecx, 4
        public_59ad51 : nop
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], bl
        add eax, 0x84
        dec ecx
        jne public_59ad51
        push ebp
        lea ebp, ds:[edi+0x268]
        mov ecx, ebp
        call public_4215b0
        mov dword ptr ss : [ebp+0x2C], ebx
        mov dword ptr ss : [ebp+0x28], ebx
        mov dword ptr ss : [ebp+0x24], ebx
        mov dword ptr ds : [edi], ebx
        lea ecx, ds:[edi+0x254]
        lea eax, ds:[edi+0x44]
        mov edx, 4
        pop ebp
        public_59ad86 : nop
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], bl
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        add ecx, 4
        add eax, 0x84
        dec edx
        jne public_59ad86
        mov dword ptr ds : [edi+0x264], 0x3F800000
        lea edi, ds:[esi+0x324]
        mov ecx, edi
        mov byte ptr ss : [esp+0x20], 3
        call public_40f150
/*FIXUP push offset public_67dca4 @0x59adb8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dca4
        mov ecx, edi
        mov byte ptr ss : [esp+0x24], 4
        mov dword ptr ds : [esi], offset public_5e5804
        mov dword ptr ds : [esi+0x3E8], ebx
        mov dword ptr ds : [esi+0x3E4], ebx
        mov dword ptr ds : [esi+0x3EC], 0xC0A00000
        mov dword ptr ds : [esi+0x3F0], 0xBF800000
        call public_40fd60
        fld dword ptr ds : [public_67dca0]
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [public_67dc9c]
        mov ecx, edi
        fstp dword ptr ss : [esp]
        call public_40fb60
        fld dword ptr ds : [public_67dc90]
        push ecx
        fstp dword ptr ss : [esp]
        mov ecx, edi
        call public_40f8c0
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x59aca0)
    }
}

#undef public_59ad51
#undef public_59ad86
