#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7810);
CLANG_FORWARD_PROC_SYMBOL(public_6f18c10);
CLANG_FORWARD_PROC_SYMBOL(public_6f56150);
CLANG_FORWARD_PROC_SYMBOL(public_6f564d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);
CLANG_FORWARD_PROC_SYMBOL(public_6f865e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6f95cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f97580);
CLANG_FORWARD_PROC_SYMBOL(public_6f979b0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0300);
CLANG_FORWARD_PROC_SYMBOL(public_6fa1b10);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1736);

#define public_6f979f4 _public_6f979f4
#define public_6f979fb _public_6f979fb
#define public_6f97aa7 _public_6f97aa7
#define public_6f97aad _public_6f97aad
#define public_6f97adf _public_6f97adf
#define public_6f97aec _public_6f97aec
#define public_6f97b1d _public_6f97b1d
#define public_6f97b22 _public_6f97b22
#define public_6f97c09 _public_6f97c09
#define public_6f97c67 _public_6f97c67
#define public_6f97cc5 _public_6f97cc5
#define public_6f97d30 _public_6f97d30
#define public_6f97d66 _public_6f97d66

PROC_DECLARE(0x6f979b0, internal_6f979b0, public_6f979b0);
extern "C" NAKED register_t __cdecl internal_6f979b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6fb1736 @0x6f979b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1736
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov al, byte ptr ss : [esp+0x20]
        mov dword ptr fs : [0], esp
        sub esp, 0x1BC
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x1D4]
        push esi
        mov esi, dword ptr ss : [esp+0x1DC]
        xor ebx, ebx
        cmp al, bl
        push edi
        mov byte ptr ds : [esi+0xC], 1
        je public_6f979f4
        mov eax, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_6f979fb
        public_6f979f4 : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x18], ecx
        public_6f979fb : nop
        lea ecx, ss:[esp+0x134]
        call public_6f865e0
        mov edx, dword ptr ds : [esi+0x3C]
        push eax
        lea ecx, ds:[esi+0x34]
        push 1
        push edx
        mov dword ptr ss : [esp+0x1E0], ebx
        call public_6fa1b10
        mov edx, dword ptr ss : [esp+0x1C0]
        mov eax, dword ptr ss : [esp+0x1BC]
        push edx
        push eax
        lea ecx, ss:[esp+0x1C0]
        mov dword ptr ss : [esp+0x1DC], 0xFFFFFFFF
        call public_6fa0300
        mov ecx, dword ptr ss : [esp+0x1BC]
        push ecx
        call public_6fa8fe0
        mov esi, dword ptr ds : [esi+0x3C]
        lea edi, ds:[esi-0x98]
        mov esi, dword ptr ss : [esp+0x1E8]
        mov dl, byte ptr ds : [esi]
        mov byte ptr ds : [edi], dl
        mov al, byte ptr ds : [esi+3]
        mov byte ptr ds : [edi+2], al
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ds : [edi+4], ecx
        mov edx, dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ss : [esp+0x1EC]
        mov dword ptr ds : [edi+8], edx
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[edi+0x34]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax+8], ecx
        mov al, byte ptr ss : [esp+0x1F0]
        add esp, 4
        cmp al, bl
        je public_6f97aa7
        fld dword ptr ds : [public_6fbcbd8]
        jmp public_6f97aad
        public_6f97aa7 : nop
        fld dword ptr ds : [public_6fbcbd4]
        public_6f97aad : nop
        lea eax, ss:[ebp+0x30]
        fstp dword ptr ds : [edi+0x40]
        push eax
        mov dword ptr ss : [esp+0x24], eax
        call public_6f75f30
        mov dword ptr ds : [edi+0xC], eax
        mov al, byte ptr ds : [esi+2]
        add esp, 4
        cmp al, bl
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov eax, 2
        je public_6f97adf
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x1C], eax
        public_6f97adf : nop
        cmp byte ptr ds : [esi+1], bl
        je public_6f97aec
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x1C], ebx
        public_6f97aec : nop
        cmp byte ptr ds : [esi+4], bl
        jne public_6f97b1d
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6fb4448]
        fstp dword ptr ss : [esp+0x14]
        call public_6f56150
        fcomp dword ptr ss : [esp+0x14]
        mov byte ptr ss : [esp+0x13], bl
        fnstsw ax
        test ah, 0x41
        jne public_6f97b22
        public_6f97b1d : nop
        mov byte ptr ss : [esp+0x13], 1
        public_6f97b22 : nop
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x2C], ebx
        mov byte ptr ss : [esp+0x30], bl
        mov dword ptr ss : [esp+0x60], ebx
        mov dword ptr ss : [esp+0x64], ebx
        call public_6f18c10
        push ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x110]
        mov dword ptr ss : [esp+0xDC], ebx
        mov byte ptr ss : [esp+0xE0], bl
        call public_6eb7810
        lea edx, ss:[esp+0x27]
        push edx
        lea ecx, ss:[esp+0x11C]
        mov byte ptr ss : [esp+0x114], bl
        mov dword ptr ss : [esp+0x118], ebx
        call public_6f93460
        mov eax, dword ptr ds : [public_6fb30b0]
        mov cx, word ptr ds : [eax]
        mov word ptr ss : [esp+0x124], cx
        mov byte ptr ss : [esp+0x126], bl
        mov dword ptr ss : [esp+0x128], ebx
        mov dword ptr ss : [esp+0x12C], ebx
        mov dword ptr ss : [esp+0x130], ebx
        mov al, byte ptr ss : [esp+0x13]
        xor ecx, ecx
        cmp al, bl
        mov dword ptr ss : [esp+0x1D4], 1
        je public_6f97cc5
        cmp byte ptr ds : [esi+4], bl
        mov byte ptr ss : [esp+0xC8], bl
        je public_6f97c09
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        push edx
        push eax
        call public_6f95cd0
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ss : [esp+0x130], 2
        mov dword ptr ss : [esp+0x138], eax
        mov dword ptr ss : [esp+0x134], ecx
        mov edx, dword ptr ds : [eax+0xC]
        add esp, 8
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0xC0], 1
        jmp public_6f97c67
        public_6f97c09 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        push ecx
        call public_6f564d0
        mov dword ptr ss : [esp+0x130], 1
        mov dword ptr ss : [esp+0x138], ebx
        mov dword ptr ss : [esp+0x134], ebx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x74], edx
        mov ebp, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [eax+4]
        add esp, 8
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [esp+0x14]
        sub ebp, ecx
        inc ebp
        imul eax, ebp
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        add eax, ecx
        mov dword ptr ss : [esp+0xC0], eax
        public_6f97c67 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ss : [esp+0x110], 1
        mov dword ptr ss : [esp+0x68], edx
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x20], eax
        fild dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10C], 0
        mov dword ptr ss : [esp+0x108], 0
        mov dword ptr ss : [esp+0x104], 0
        fmul dword ptr ds : [public_6fb4448]
        lea ecx, ss:[esp+0x2C]
        fmul qword ptr ds : [public_6fbcd08]
        fadd qword ptr ds : [public_6fbbc10]
        fstp dword ptr ss : [esp+0xC4]
        public_6f97cc5 : nop
        mov dl, byte ptr ds : [esi+1]
        xor eax, eax
        cmp dl, bl
        mov dl, byte ptr ss : [esp+0x1EC]
        setne al
        inc eax
        cmp dl, bl
        sete dl
        add esi, 8
        push edx
        mov edx, dword ptr ss : [esp+0x1F4]
        push edx
        push ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push 1
        push eax
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        sub esp, 0xC
        mov edx, esp
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push ecx
        push edi
        mov dword ptr ds : [edx+8], eax
        call public_6f97580
        mov bl, al
        mov eax, dword ptr ss : [esp+0x14C]
        mov esi, dword ptr ds : [eax]
        add esp, 0x30
        cmp esi, eax
        mov edi, eax
        je public_6f97d66
        lea ebx, ds:[ebx]
        public_6f97d30 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x124]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x120], ecx
        jne public_6f97d30
        mov eax, dword ptr ss : [esp+0x11C]
        public_6f97d66 : nop
        push eax
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x1D0]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        mov al, bl
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x1C8
        ret 
        UNREACHABLE_TRAP(0x6f979b0)
    }
}

#undef public_6f979f4
#undef public_6f979fb
#undef public_6f97aa7
#undef public_6f97aad
#undef public_6f97adf
#undef public_6f97aec
#undef public_6f97b1d
#undef public_6f97b22
#undef public_6f97c09
#undef public_6f97c67
#undef public_6f97cc5
#undef public_6f97d30
#undef public_6f97d66
