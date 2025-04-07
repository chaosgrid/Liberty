#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d42b60);
CLANG_FORWARD_PROC_SYMBOL(public_6d42f30);
CLANG_FORWARD_PROC_SYMBOL(public_6d43090);
CLANG_FORWARD_PROC_SYMBOL(public_6d43130);

#define public_6d42ba0 _public_6d42ba0
#define public_6d42bbc _public_6d42bbc
#define public_6d42bd4 _public_6d42bd4
#define public_6d42bef _public_6d42bef
#define public_6d42c03 _public_6d42c03
#define public_6d42c10 _public_6d42c10
#define public_6d42c1d _public_6d42c1d
#define public_6d42c20 _public_6d42c20
#define public_6d42c3a _public_6d42c3a
#define public_6d42c50 _public_6d42c50
#define public_6d42cbc _public_6d42cbc
#define public_6d42cd8 _public_6d42cd8
#define public_6d42cf2 _public_6d42cf2
#define public_6d42cf6 _public_6d42cf6
#define public_6d42d00 _public_6d42d00
#define public_6d42d12 _public_6d42d12
#define public_6d42d27 _public_6d42d27
#define public_6d42d4d _public_6d42d4d
#define public_6d42d74 _public_6d42d74
#define public_6d42d7d _public_6d42d7d
#define public_6d42d98 _public_6d42d98
#define public_6d42da6 _public_6d42da6
#define public_6d42dc2 _public_6d42dc2
#define public_6d42dce _public_6d42dce
#define public_6d42dd4 _public_6d42dd4
#define public_6d42de1 _public_6d42de1
#define public_6d42de4 _public_6d42de4
#define public_6d42deb _public_6d42deb
#define public_6d42df1 _public_6d42df1
#define public_6d42e00 _public_6d42e00
#define public_6d42e14 _public_6d42e14
#define public_6d42e1c _public_6d42e1c
#define public_6d42e25 _public_6d42e25

PROC_DECLARE(0x6d42b60, internal_6d42b60, public_6d42b60);
extern "C" NAKED register_t __cdecl internal_6d42b60()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x2C]
        mov eax, edi
        sub eax, ebp
        sar eax, 2
        cmp eax, 0x10
        jg public_6d42c3a
        cmp ebp, edi
        je public_6d42e25
        lea ebx, ss:[ebp+4]
        cmp ebx, edi
        je public_6d42e25
        lea esi, ds:[ebx-4]
        mov dword ptr ss : [esp+0x1C], esi
        lea esp, ss:[esp]
        public_6d42ba0 : nop
        mov ecx, dword ptr ds : [ebx]
        mov ax, word ptr ss : [ebp]
        cmp ax, cx
        mov dword ptr ss : [esp+0x20], ecx
        ja public_6d42c03
        jb public_6d42bbc
        mov ax, word ptr ss : [esp+0x22]
        cmp ax, word ptr ss : [ebp+2]
        jb public_6d42c03
        public_6d42bbc : nop
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x18]
        push esi
        push ecx
        mov edi, ebx
        call public_6d43130
        add esp, 8
        test al, al
        je public_6d42bef
        public_6d42bd4 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [edi], edx
        mov edi, esi
        sub esi, 4
        lea eax, ss:[esp+0x18]
        push esi
        push eax
        call public_6d43130
        add esp, 8
        test al, al
        jne public_6d42bd4
        public_6d42bef : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov ebp, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edi], ecx
        mov edi, dword ptr ss : [esp+0x2C]
        jmp public_6d42c20
        public_6d42c03 : nop
        cmp ebp, ebx
        mov eax, ebx
        je public_6d42c1d
        lea esp, ss:[esp]
        public_6d42c10 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ebp
        mov dword ptr ds : [eax+4], edx
        jne public_6d42c10
        public_6d42c1d : nop
        mov dword ptr ss : [ebp], ecx
        public_6d42c20 : nop
        add ebx, 4
        add esi, 4
        cmp ebx, edi
        mov dword ptr ss : [esp+0x1C], esi
        jne public_6d42ba0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        public_6d42c3a : nop
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x20], edi
        mov ebx, ebp
        jle public_6d42d98
        lea esp, ss:[esp]
        public_6d42c50 : nop
        mov eax, dword ptr ds : [edi-4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, edi
        sub eax, ebx
        sar eax, 2
        cdq 
        sub eax, edx
        sar eax, 1
        mov eax, dword ptr ds : [ebx+eax*4]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x14], eax
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6d43130
        add esp, 8
        test al, al
        je public_6d42cbc
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6d43130
        add esp, 8
        test al, al
        jne public_6d42cf2
        lea ecx, ss:[esp+0x10]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        call public_6d43130
        add esp, 8
        test al, al
        lea eax, ss:[esp+0x10]
        jne public_6d42cf6
        lea eax, ss:[esp+0x14]
        jmp public_6d42cf6
        public_6d42cbc : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call public_6d43130
        add esp, 8
        test al, al
        je public_6d42cd8
        lea eax, ss:[esp+0x14]
        jmp public_6d42cf6
        public_6d42cd8 : nop
        lea edx, ss:[esp+0x10]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        call public_6d43130
        add esp, 8
        test al, al
        lea eax, ss:[esp+0x10]
        jne public_6d42cf6
        public_6d42cf2 : nop
        lea eax, ss:[esp+0x18]
        public_6d42cf6 : nop
        mov eax, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], eax
        mov esi, ebx
        mov edi, edi
        public_6d42d00 : nop
        lea ecx, ss:[esp+0x1C]
        push ecx
        push esi
        call public_6d43130
        add esp, 8
        test al, al
        je public_6d42d27
        public_6d42d12 : nop
        lea edx, ss:[esp+0x1C]
        push edx
        add esi, 4
        push esi
        call public_6d43130
        add esp, 8
        test al, al
        jne public_6d42d12
        public_6d42d27 : nop
        sub edi, 4
        lea eax, ss:[esp+0x1C]
        push edi
        push eax
        call public_6d43130
        add esp, 8
        test al, al
        jne public_6d42d27
        cmp edi, esi
        jbe public_6d42d4d
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [esi], ecx
        mov dword ptr ds : [edi], eax
        add esi, 4
        jmp public_6d42d00
        public_6d42d4d : nop
        mov edi, dword ptr ss : [esp+0x20]
        mov edx, edi
        mov eax, esi
        sub edx, esi
        sub eax, ebx
        and edx, 0xFFFFFFFC
        and eax, 0xFFFFFFFC
        cmp edx, eax
        push 0
        jg public_6d42d74
        push edi
        push esi
        call public_6d42f30
        mov edi, esi
        mov dword ptr ss : [esp+0x2C], edi
        jmp public_6d42d7d
        public_6d42d74 : nop
        push esi
        push ebx
        call public_6d42f30
        mov ebx, esi
        public_6d42d7d : nop
        mov ecx, edi
        sub ecx, ebx
        and ecx, 0xFFFFFFFC
        add esp, 0xC
        cmp ecx, 0x40
        jg public_6d42c50
        mov edi, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x28]
        public_6d42d98 : nop
        lea ebx, ss:[ebp+0x40]
        cmp ebp, ebx
        je public_6d42deb
        lea esi, ss:[ebp+4]
        cmp esi, ebx
        je public_6d42deb
        public_6d42da6 : nop
        mov ecx, dword ptr ds : [esi]
        mov ax, word ptr ss : [ebp]
        cmp ax, cx
        mov dword ptr ss : [esp+0x2C], ecx
        ja public_6d42dce
        jb public_6d42dc2
        mov dx, word ptr ss : [esp+0x2E]
        cmp dx, word ptr ss : [ebp+2]
        jb public_6d42dce
        public_6d42dc2 : nop
        push ecx
        push esi
        call public_6d43090
        add esp, 8
        jmp public_6d42de4
        public_6d42dce : nop
        cmp ebp, esi
        mov eax, esi
        je public_6d42de1
        public_6d42dd4 : nop
        mov edx, dword ptr ds : [eax-4]
        sub eax, 4
        cmp eax, ebp
        mov dword ptr ds : [eax+4], edx
        jne public_6d42dd4
        public_6d42de1 : nop
        mov dword ptr ss : [ebp], ecx
        public_6d42de4 : nop
        add esi, 4
        cmp esi, ebx
        jne public_6d42da6
        public_6d42deb : nop
        mov esi, ebx
        cmp esi, edi
        je public_6d42e25
        public_6d42df1 : nop
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x2C], edx
        mov bp, word ptr ss : [esp+0x2E]
        mov ebx, esi
        mov eax, esi
        public_6d42e00 : nop
        mov cx, word ptr ds : [eax-4]
        sub eax, 4
        cmp cx, dx
        ja public_6d42e14
        jb public_6d42e1c
        cmp bp, word ptr ds : [eax+2]
        jae public_6d42e1c
        public_6d42e14 : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [ebx], ecx
        mov ebx, eax
        jmp public_6d42e00
        public_6d42e1c : nop
        add esi, 4
        cmp esi, edi
        mov dword ptr ds : [ebx], edx
        jne public_6d42df1
        public_6d42e25 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6d42b60)
    }
}

#undef public_6d42ba0
#undef public_6d42bbc
#undef public_6d42bd4
#undef public_6d42bef
#undef public_6d42c03
#undef public_6d42c10
#undef public_6d42c1d
#undef public_6d42c20
#undef public_6d42c3a
#undef public_6d42c50
#undef public_6d42cbc
#undef public_6d42cd8
#undef public_6d42cf2
#undef public_6d42cf6
#undef public_6d42d00
#undef public_6d42d12
#undef public_6d42d27
#undef public_6d42d4d
#undef public_6d42d74
#undef public_6d42d7d
#undef public_6d42d98
#undef public_6d42da6
#undef public_6d42dc2
#undef public_6d42dce
#undef public_6d42dd4
#undef public_6d42de1
#undef public_6d42de4
#undef public_6d42deb
#undef public_6d42df1
#undef public_6d42e00
#undef public_6d42e14
#undef public_6d42e1c
#undef public_6d42e25
