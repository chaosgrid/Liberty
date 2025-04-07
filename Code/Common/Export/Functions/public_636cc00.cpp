#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6356a40);
CLANG_FORWARD_PROC_SYMBOL(public_6356a70);
CLANG_FORWARD_PROC_SYMBOL(public_6356ac0);
CLANG_FORWARD_PROC_SYMBOL(public_6356b40);
CLANG_FORWARD_PROC_SYMBOL(public_636cc00);
CLANG_FORWARD_PROC_SYMBOL(public_636cf40);
CLANG_FORWARD_PROC_SYMBOL(public_636cf60);
CLANG_FORWARD_JUMP_SYMBOL(public_6398898);

#define public_636cc84 _public_636cc84
#define public_636cc9d _public_636cc9d
#define public_636ccdd _public_636ccdd
#define public_636cd09 _public_636cd09
#define public_636cd4e _public_636cd4e
#define public_636cd54 _public_636cd54
#define public_636cd93 _public_636cd93
#define public_636cdb7 _public_636cdb7
#define public_636cdc4 _public_636cdc4
#define public_636cde8 _public_636cde8
#define public_636cdec _public_636cdec
#define public_636ce2f _public_636ce2f
#define public_636ce7a _public_636ce7a
#define public_636ce82 _public_636ce82
#define public_636cec8 _public_636cec8
#define public_636cecc _public_636cecc
#define public_636cef3 _public_636cef3

PROC_DECLARE(0x636cc00, internal_636cc00, public_636cc00);
extern "C" NAKED register_t __cdecl internal_636cc00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6398898 @0x636cc02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6398898
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x6C
        push ebx
        push ebp
        push esi
        push edi
        push 0xFFFFFFFF
        mov esi, ecx
        push 0x10
        push 0x400
        lea ecx, ss:[esp+0x78]
        mov dword ptr ss : [esp+0x28], esi
        call public_6356a40
        xor edi, edi
        push edi
        push 0xC
        push 0x400
        lea ecx, ss:[esp+0x68]
        mov dword ptr ss : [esp+0x90], edi
        mov dword ptr ss : [esp+0x1C], edi
        call public_6356a40
        push edi
        push 8
        push 0x400
        lea ecx, ss:[esp+0x58]
        mov byte ptr ss : [esp+0x90], 1
        call public_6356a40
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov byte ptr ss : [esp+0x84], 2
        dec ecx
        mov dword ptr ss : [esp+0x18], ecx
        js public_636cdc4
        public_636cc84 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [eax+ecx*4]
        movsx eax, word ptr ds : [ebx+0xC]
        dec eax
        lea ebp, ds:[ebx+0x10]
        js public_636cdb7
        inc eax
        mov dword ptr ss : [esp+0x14], eax
        public_636cc9d : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [ebp+8]
        and ecx, 0xFFFF
        shl ecx, 4
        add ecx, eax
        add ecx, ebx
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        and edx, 0xFFFF
        and ecx, 0xFFFF
        shl edx, 4
        shl ecx, 4
        add edx, eax
        add ecx, eax
        add edx, ebx
        add ecx, ebx
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], ecx
        xor esi, esi
        public_636ccdd : nop
        mov edi, dword ptr ss : [esp+esi+0x40]
        push edi
        lea ecx, ss:[esp+0x70]
        call public_6356ac0
        test eax, eax
        jge public_636cd09
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        push edi
        lea ecx, ss:[esp+0x74]
        call public_6356b40
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, ecx
        inc ecx
        mov dword ptr ss : [esp+0x10], ecx
        public_636cd09 : nop
        mov dword ptr ss : [esp+esi+0x28], eax
        add esi, 4
        cmp esi, 0xC
        jl public_636ccdd
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x40]
        call public_636cf40
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x60]
        call public_6356ac0
        test eax, eax
        jne public_636cd4e
        push ebp
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x64]
        call public_6356b40
        public_636cd4e : nop
        xor eax, eax
        lea edi, ss:[esp+0x28]
        public_636cd54 : nop
        lea esi, ds:[eax+1]
        mov eax, esi
        cdq 
        mov ecx, 3
        idiv ecx
        mov eax, dword ptr ds : [edi]
        lea ecx, ss:[esp+0x20]
        mov edx, dword ptr ss : [esp+edx*4+0x28]
        push edx
        push eax
        call public_636cf60
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_6356ac0
        test eax, eax
        jne public_636cd93
        push ebp
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[esp+0x54]
        call public_6356b40
        public_636cd93 : nop
        mov eax, esi
        add edi, 4
        cmp eax, 3
        jl public_636cd54
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x10
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_636cc9d
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ss : [esp+0x1C]
        public_636cdb7 : nop
        dec ecx
        mov dword ptr ss : [esp+0x18], ecx
        jns public_636cc84
        xor edi, edi
        public_636cdc4 : nop
        mov ebx, dword ptr ds : [esi+8]
        movsx eax, word ptr ds : [ebx+0xC]
        dec eax
        lea ebp, ds:[ebx+0x10]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x10], ebp
        js public_636cef3
        inc eax
        mov dword ptr ss : [esp+0x1C], eax
        jmp public_636cdec
        public_636cde8 : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_636cdec : nop
        mov ecx, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ss : [ebp+8]
        and ecx, 0xFFFF
        shl ecx, 4
        lea edi, ss:[ebp+4]
        add ecx, eax
        add ecx, ebx
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, dword ptr ss : [ebp+0xC]
        and edx, 0xFFFF
        and ecx, 0xFFFF
        shl edx, 4
        shl ecx, 4
        add edx, eax
        add ecx, eax
        add edx, ebx
        add ecx, ebx
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], ecx
        xor esi, esi
        public_636ce2f : nop
        mov edx, dword ptr ss : [esp+esi+0x40]
        push edx
        lea ecx, ss:[esp+0x70]
        call public_6356ac0
        mov dword ptr ss : [esp+esi+0x28], eax
        add esi, 4
        cmp esi, 0xC
        jl public_636ce2f
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0x40]
        call public_636cf40
        lea eax, ss:[esp+0x34]
        push eax
        lea ecx, ss:[esp+0x60]
        call public_6356ac0
        test eax, eax
        jne public_636ce7a
        or dword ptr ss : [ebp], 0x80000000
        public_636ce7a : nop
        xor eax, eax
        lea ebp, ss:[esp+0x28]
        mov esi, edi
        public_636ce82 : nop
        lea edi, ds:[eax+1]
        mov eax, edi
        cdq 
        mov ecx, 3
        idiv ecx
        mov eax, dword ptr ss : [ebp]
        lea ecx, ss:[esp+0x20]
        mov edx, dword ptr ss : [esp+edx*4+0x28]
        push edx
        push eax
        call public_636cf60
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_6356ac0
        test eax, eax
        jne public_636cec8
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x18]
        or ecx, 0x80000000
        inc eax
        mov dword ptr ds : [esi], ecx
        mov dword ptr ss : [esp+0x18], eax
        jmp public_636cecc
        public_636cec8 : nop
        inc dword ptr ss : [esp+0x14]
        public_636cecc : nop
        mov eax, edi
        add ebp, 4
        add esi, 4
        cmp eax, 3
        jl public_636ce82
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        add ecx, 0x10
        dec eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_636cde8
        public_636cef3 : nop
        lea ecx, ss:[esp+0x4C]
        mov byte ptr ss : [esp+0x84], 1
        call public_6356a70
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0x84], 0
        call public_6356a70
        lea ecx, ss:[esp+0x6C]
        mov dword ptr ss : [esp+0x84], 0xFFFFFFFF
        call public_6356a70
        mov ecx, dword ptr ss : [esp+0x7C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x78
        ret 
        UNREACHABLE_TRAP(0x636cc00)
    }
}

#undef public_636cc84
#undef public_636cc9d
#undef public_636ccdd
#undef public_636cd09
#undef public_636cd4e
#undef public_636cd54
#undef public_636cd93
#undef public_636cdb7
#undef public_636cdc4
#undef public_636cde8
#undef public_636cdec
#undef public_636ce2f
#undef public_636ce7a
#undef public_636ce82
#undef public_636cec8
#undef public_636cecc
#undef public_636cef3
