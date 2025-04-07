#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef948e);
CLANG_FORWARD_PROC_SYMBOL(public_6efac0c);
CLANG_FORWARD_PROC_SYMBOL(public_6efacd3);
CLANG_FORWARD_PROC_SYMBOL(public_6efba4c);

#define public_6efad0e _public_6efad0e
#define public_6efad24 _public_6efad24
#define public_6efad27 _public_6efad27
#define public_6efad2a _public_6efad2a
#define public_6efad3d _public_6efad3d
#define public_6efad47 _public_6efad47
#define public_6efad4e _public_6efad4e
#define public_6efad56 _public_6efad56
#define public_6efad5d _public_6efad5d
#define public_6efad77 _public_6efad77
#define public_6efad83 _public_6efad83
#define public_6efad8c _public_6efad8c
#define public_6efad99 _public_6efad99
#define public_6efadb4 _public_6efadb4
#define public_6efadd4 _public_6efadd4
#define public_6efaddb _public_6efaddb
#define public_6efade3 _public_6efade3
#define public_6efadf1 _public_6efadf1
#define public_6efae06 _public_6efae06
#define public_6efae0d _public_6efae0d
#define public_6efae10 _public_6efae10
#define public_6efae29 _public_6efae29
#define public_6efae37 _public_6efae37
#define public_6efae51 _public_6efae51
#define public_6efae54 _public_6efae54
#define public_6efae59 _public_6efae59
#define public_6efae61 _public_6efae61
#define public_6efae68 _public_6efae68
#define public_6efae74 _public_6efae74
#define public_6efae81 _public_6efae81
#define public_6efae9a _public_6efae9a
#define public_6efaea8 _public_6efaea8
#define public_6efaec3 _public_6efaec3
#define public_6efaec8 _public_6efaec8
#define public_6efaedf _public_6efaedf
#define public_6efaefb _public_6efaefb
#define public_6efaf09 _public_6efaf09
#define public_6efaf15 _public_6efaf15
#define public_6efaf25 _public_6efaf25
#define public_6efaf3a _public_6efaf3a
#define public_6efaf3e _public_6efaf3e
#define public_6efaf41 _public_6efaf41
#define public_6efaf4b _public_6efaf4b
#define public_6efaf5f _public_6efaf5f
#define public_6efaf69 _public_6efaf69
#define public_6efaf6b _public_6efaf6b
#define public_6efaf6c _public_6efaf6c
#define public_6efaf72 _public_6efaf72
#define public_6efaf79 _public_6efaf79
#define public_6efaf95 _public_6efaf95
#define public_6efafa1 _public_6efafa1
#define public_6efafa3 _public_6efafa3
#define public_6efafa9 _public_6efafa9
#define public_6efafad _public_6efafad
#define public_6efafbb _public_6efafbb
#define public_6efafc3 _public_6efafc3
#define public_6efafcc _public_6efafcc
#define public_6efafe4 _public_6efafe4
#define public_6efaff3 _public_6efaff3
#define public_6efb00e _public_6efb00e
#define public_6efb013 _public_6efb013
#define public_6efb016 _public_6efb016
#define public_6efb02e _public_6efb02e
#define public_6efb03d _public_6efb03d
#define public_6efb046 _public_6efb046
#define public_6efb049 _public_6efb049
#define public_6efb04b _public_6efb04b
#define public_6efb06b _public_6efb06b
#define public_6efb077 _public_6efb077
#define public_6efb07a _public_6efb07a
#define public_6efb084 _public_6efb084
#define public_6efb092 _public_6efb092
#define public_6efb0b1 _public_6efb0b1
#define public_6efb0bc _public_6efb0bc
#define public_6efb0c4 _public_6efb0c4
#define public_6efb0d2 _public_6efb0d2
#define public_6efb0de _public_6efb0de
#define public_6efb0fb _public_6efb0fb
#define public_6efb10b _public_6efb10b
#define public_6efb129 _public_6efb129
#define public_6efb133 _public_6efb133
#define public_6efb144 _public_6efb144
#define public_6efb159 _public_6efb159

PROC_DECLARE(0x6efacd3, internal_6efacd3, public_6efacd3);
extern "C" NAKED register_t __cdecl internal_6efacd3()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        push ebp
        mov ebp, esp
        sub esp, 0x5C
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [ebp+0x10]
        lea eax, ss:[ebp-0x5C]
        push 1
        mov dword ptr ss : [ebp-0xC], eax
        xor eax, eax
        pop edx
        mov dword ptr ss : [ebp-0x28], eax
        mov dword ptr ss : [ebp-0x18], edx
        mov dword ptr ss : [ebp-4], eax
        mov dword ptr ss : [ebp-0x10], eax
        mov dword ptr ss : [ebp-0x24], eax
        mov dword ptr ss : [ebp-0x20], eax
        mov dword ptr ss : [ebp-0x2C], eax
        mov dword ptr ss : [ebp-0x30], eax
        mov dword ptr ss : [ebp-0x1C], eax
        mov dword ptr ss : [ebp-8], eax
        mov dword ptr ss : [ebp-0x14], eax
        mov dword ptr ss : [ebp+0x10], edi
        public_6efad0e : nop
        mov cl, byte ptr ds : [edi]
        cmp cl, 0x20
        je public_6efad24
        cmp cl, 9
        je public_6efad24
        cmp cl, 0xA
        je public_6efad24
        cmp cl, 0xD
        jne public_6efad27
        public_6efad24 : nop
        inc edi
        jmp public_6efad0e
        public_6efad27 : nop
        push 4
        pop esi
        public_6efad2a : nop
        mov bl, byte ptr ds : [edi]
        inc edi
        cmp eax, 0xB
        ja public_6efafad
/*FIXUP jmp dword ptr ds : [eax*4+public_6efb174] @0x6efad36*/
  JMPTB cmp eax, 0
  JMPTB je public_6efad3d
  JMPTB cmp eax, 1
  JMPTB je public_6efad8c
  JMPTB cmp eax, 2
  JMPTB je public_6efade3
  JMPTB cmp eax, 3
  JMPTB je public_6efae0d
  JMPTB cmp eax, 4
  JMPTB je public_6efae68
  JMPTB cmp eax, 5
  JMPTB je public_6efaedf
  JMPTB cmp eax, 6
  JMPTB je public_6efaf15
  JMPTB cmp eax, 7
  JMPTB je public_6efaf5f
  JMPTB cmp eax, 8
  JMPTB je public_6efaf3e
  JMPTB cmp eax, 9
  JMPTB je public_6efafc3
  JMPTB cmp eax, 0xA
  JMPTB je public_6efafad
  JMPTB cmp eax, 0xB
  JMPTB je public_6efaf79
  JMPTB int 3
        public_6efad3d : nop
        cmp bl, 0x31
        jl public_6efad4e
        cmp bl, 0x39
        jg public_6efad4e
        public_6efad47 : nop
        push 3
        jmp public_6efaf6b
        public_6efad4e : nop
        cmp bl, byte ptr ds : [public_6f00614]
        jne public_6efad5d
        public_6efad56 : nop
        push 5
        jmp public_6efafa3
        public_6efad5d : nop
        movsx eax, bl
        sub eax, 0x2B
        je public_6efad83
        dec eax
        dec eax
        je public_6efad77
        sub eax, 3
        jne public_6efb046
        jmp public_6efae06
        public_6efad77 : nop
        push 2
        mov dword ptr ss : [ebp-0x28], 0x8000
        pop eax
        jmp public_6efad2a
        public_6efad83 : nop
        and dword ptr ss : [ebp-0x28], 0
        push 2
        pop eax
        jmp public_6efad2a
        public_6efad8c : nop
        cmp bl, 0x31
        mov dword ptr ss : [ebp-0x10], edx
        jl public_6efad99
        cmp bl, 0x39
        jle public_6efad47
        public_6efad99 : nop
        cmp bl, byte ptr ds : [public_6f00614]
        je public_6efae61
        cmp bl, 0x2B
        je public_6efaddb
        cmp bl, 0x2D
        je public_6efaddb
        cmp bl, 0x30
        je public_6efae06
        public_6efadb4 : nop
        cmp bl, 0x43
        jle public_6efb046
        cmp bl, 0x45
        jle public_6efadd4
        cmp bl, 0x63
        jle public_6efb046
        cmp bl, 0x65
        jg public_6efb046
        public_6efadd4 : nop
        push 6
        jmp public_6efafa3
        public_6efaddb : nop
        dec edi
        push 0xB
        jmp public_6efafa3
        public_6efade3 : nop
        cmp bl, 0x31
        jl public_6efadf1
        cmp bl, 0x39
        jle public_6efad47
        public_6efadf1 : nop
        cmp bl, byte ptr ds : [public_6f00614]
        je public_6efad56
        cmp bl, 0x30
        jne public_6efafbb
        public_6efae06 : nop
        mov eax, edx
        jmp public_6efad2a
        public_6efae0d : nop
        mov dword ptr ss : [ebp-0x10], edx
        public_6efae10 : nop
        cmp dword ptr ds : [public_6f00610], edx
        jle public_6efae29
        movzx eax, bl
        push esi
        push eax
        call public_6ef948e
        pop ecx
        pop ecx
        push 1
        pop edx
        jmp public_6efae37
        public_6efae29 : nop
        mov ecx, dword ptr ds : [public_6f0061c]
        movzx eax, bl
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, esi
        public_6efae37 : nop
        test eax, eax
        je public_6efae59
        cmp dword ptr ss : [ebp-4], 0x19
        jae public_6efae51
        mov eax, dword ptr ss : [ebp-0xC]
        inc dword ptr ss : [ebp-4]
        sub bl, 0x30
        inc dword ptr ss : [ebp-0xC]
        mov byte ptr ds : [eax], bl
        jmp public_6efae54
        public_6efae51 : nop
        inc dword ptr ss : [ebp-8]
        public_6efae54 : nop
        mov bl, byte ptr ds : [edi]
        inc edi
        jmp public_6efae10
        public_6efae59 : nop
        cmp bl, byte ptr ds : [public_6f00614]
        jne public_6efaec8
        public_6efae61 : nop
        mov eax, esi
        jmp public_6efad2a
        public_6efae68 : nop
        cmp dword ptr ss : [ebp-4], 0
        mov dword ptr ss : [ebp-0x10], edx
        mov dword ptr ss : [ebp-0x24], edx
        jne public_6efae81
        public_6efae74 : nop
        cmp bl, 0x30
        jne public_6efae81
        dec dword ptr ss : [ebp-8]
        mov bl, byte ptr ds : [edi]
        inc edi
        jmp public_6efae74
        public_6efae81 : nop
        cmp dword ptr ds : [public_6f00610], edx
        jle public_6efae9a
        movzx eax, bl
        push esi
        push eax
        call public_6ef948e
        pop ecx
        pop ecx
        push 1
        pop edx
        jmp public_6efaea8
        public_6efae9a : nop
        mov ecx, dword ptr ds : [public_6f0061c]
        movzx eax, bl
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, esi
        public_6efaea8 : nop
        test eax, eax
        je public_6efaec8
        cmp dword ptr ss : [ebp-4], 0x19
        jae public_6efaec3
        mov eax, dword ptr ss : [ebp-0xC]
        inc dword ptr ss : [ebp-4]
        sub bl, 0x30
        inc dword ptr ss : [ebp-0xC]
        dec dword ptr ss : [ebp-8]
        mov byte ptr ds : [eax], bl
        public_6efaec3 : nop
        mov bl, byte ptr ds : [edi]
        inc edi
        jmp public_6efae81
        public_6efaec8 : nop
        cmp bl, 0x2B
        je public_6efaddb
        cmp bl, 0x2D
        je public_6efaddb
        jmp public_6efadb4
        public_6efaedf : nop
        cmp dword ptr ds : [public_6f00610], edx
        mov dword ptr ss : [ebp-0x24], edx
        jle public_6efaefb
        movzx eax, bl
        push esi
        push eax
        call public_6ef948e
        pop ecx
        pop ecx
        push 1
        pop edx
        jmp public_6efaf09
        public_6efaefb : nop
        mov ecx, dword ptr ds : [public_6f0061c]
        movzx eax, bl
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, esi
        public_6efaf09 : nop
        test eax, eax
        je public_6efafbb
        mov eax, esi
        jmp public_6efaf6c
        public_6efaf15 : nop
        lea ecx, ds:[edi-2]
        cmp bl, 0x31
        mov dword ptr ss : [ebp+0x10], ecx
        jl public_6efaf25
        cmp bl, 0x39
        jle public_6efaf69
        public_6efaf25 : nop
        movsx eax, bl
        sub eax, 0x2B
        je public_6efafa1
        dec eax
        dec eax
        je public_6efaf95
        sub eax, 3
        jne public_6efb049
        public_6efaf3a : nop
        push 8
        jmp public_6efafa3
        public_6efaf3e : nop
        mov dword ptr ss : [ebp-0x20], edx
        public_6efaf41 : nop
        cmp bl, 0x30
        jne public_6efaf4b
        mov bl, byte ptr ds : [edi]
        inc edi
        jmp public_6efaf41
        public_6efaf4b : nop
        cmp bl, 0x31
        jl public_6efb046
        cmp bl, 0x39
        jg public_6efb046
        jmp public_6efaf69
        public_6efaf5f : nop
        cmp bl, 0x31
        jl public_6efaf72
        cmp bl, 0x39
        jg public_6efaf72
        public_6efaf69 : nop
        push 9
        public_6efaf6b : nop
        pop eax
        public_6efaf6c : nop
        dec edi
        jmp public_6efad2a
        public_6efaf72 : nop
        cmp bl, 0x30
        jne public_6efafbb
        jmp public_6efaf3a
        public_6efaf79 : nop
        cmp dword ptr ss : [ebp+0x20], 0
        je public_6efafa9
        movsx eax, bl
        lea ecx, ds:[edi-1]
        sub eax, 0x2B
        mov dword ptr ss : [ebp+0x10], ecx
        je public_6efafa1
        dec eax
        dec eax
        jne public_6efb049
        public_6efaf95 : nop
        or dword ptr ss : [ebp-0x18], 0xFFFFFFFF
        push 7
        pop eax
        jmp public_6efad2a
        public_6efafa1 : nop
        push 7
        public_6efafa3 : nop
        pop eax
        jmp public_6efad2a
        public_6efafa9 : nop
        push 0xA
        dec edi
        pop eax
        public_6efafad : nop
        cmp eax, 0xA
        je public_6efb04b
        jmp public_6efad2a
        public_6efafbb : nop
        mov edi, dword ptr ss : [ebp+0x10]
        jmp public_6efb04b
        public_6efafc3 : nop
        mov dword ptr ss : [ebp-0x20], 1
        xor esi, esi
        public_6efafcc : nop
        cmp dword ptr ds : [public_6f00610], 1
        jle public_6efafe4
        movzx eax, bl
        push 4
        push eax
        call public_6ef948e
        pop ecx
        pop ecx
        jmp public_6efaff3
        public_6efafe4 : nop
        mov ecx, dword ptr ds : [public_6f0061c]
        movzx eax, bl
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, 4
        public_6efaff3 : nop
        test eax, eax
        je public_6efb013
        movsx ecx, bl
        lea eax, ds:[esi+esi*4]
        lea esi, ds:[ecx+eax*2-0x30]
        cmp esi, 0x1450
        jg public_6efb00e
        mov bl, byte ptr ds : [edi]
        inc edi
        jmp public_6efafcc
        public_6efb00e : nop
        mov esi, 0x1451
        public_6efb013 : nop
        mov dword ptr ss : [ebp-0x1C], esi
        public_6efb016 : nop
        cmp dword ptr ds : [public_6f00610], 1
        jle public_6efb02e
        movzx eax, bl
        push 4
        push eax
        call public_6ef948e
        pop ecx
        pop ecx
        jmp public_6efb03d
        public_6efb02e : nop
        mov ecx, dword ptr ds : [public_6f0061c]
        movzx eax, bl
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, 4
        public_6efb03d : nop
        test eax, eax
        je public_6efb046
        mov bl, byte ptr ds : [edi]
        inc edi
        jmp public_6efb016
        public_6efb046 : nop
        dec edi
        jmp public_6efb04b
        public_6efb049 : nop
        mov edi, ecx
        public_6efb04b : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp dword ptr ss : [ebp-0x10], 0
        mov dword ptr ds : [eax], edi
        je public_6efb133
        push 0x18
        pop eax
        cmp dword ptr ss : [ebp-4], eax
        jbe public_6efb077
        cmp byte ptr ss : [ebp-0x45], 5
        jl public_6efb06b
        inc byte ptr ss : [ebp-0x45]
        public_6efb06b : nop
        mov dword ptr ss : [ebp-4], eax
        mov eax, dword ptr ss : [ebp-0xC]
        dec eax
        inc dword ptr ss : [ebp-8]
        jmp public_6efb07a
        public_6efb077 : nop
        mov eax, dword ptr ss : [ebp-0xC]
        public_6efb07a : nop
        cmp dword ptr ss : [ebp-4], 0
        jbe public_6efb129
        public_6efb084 : nop
        dec eax
        cmp byte ptr ds : [eax], 0
        jne public_6efb092
        dec dword ptr ss : [ebp-4]
        inc dword ptr ss : [ebp-8]
        jmp public_6efb084
        public_6efb092 : nop
        lea eax, ss:[ebp-0x40]
        push eax
        lea eax, ss:[ebp-0x5C]
        push dword ptr ss : [ebp-4]
        push eax
        call public_6efac0c
        mov eax, dword ptr ss : [ebp-0x1C]
        xor ecx, ecx
        add esp, 0xC
        cmp dword ptr ss : [ebp-0x18], ecx
        jge public_6efb0b1
        neg eax
        public_6efb0b1 : nop
        add eax, dword ptr ss : [ebp-8]
        cmp dword ptr ss : [ebp-0x20], ecx
        jne public_6efb0bc
        add eax, dword ptr ss : [ebp+0x18]
        public_6efb0bc : nop
        cmp dword ptr ss : [ebp-0x24], ecx
        jne public_6efb0c4
        sub eax, dword ptr ss : [ebp+0x1C]
        public_6efb0c4 : nop
        cmp eax, 0x1450
        jle public_6efb0fb
        mov dword ptr ss : [ebp-0x2C], 1
        public_6efb0d2 : nop
        mov ebx, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [ebp+0x10]
        mov eax, dword ptr ss : [ebp+0x10]
        mov edx, dword ptr ss : [ebp+0x10]
        public_6efb0de : nop
        cmp dword ptr ss : [ebp-0x2C], 0
        je public_6efb144
        xor ebx, ebx
        mov eax, 0x7FFF
        mov esi, 0x80000000
        xor edx, edx
        mov dword ptr ss : [ebp-0x14], 2
        jmp public_6efb159
        public_6efb0fb : nop
        cmp eax, 0xFFFFEBB0
        jge public_6efb10b
        mov dword ptr ss : [ebp-0x30], 1
        jmp public_6efb0d2
        public_6efb10b : nop
        push dword ptr ss : [ebp+0x14]
        push eax
        lea eax, ss:[ebp-0x40]
        push eax
        call public_6efba4c
        mov edx, dword ptr ss : [ebp-0x40]
        mov ebx, dword ptr ss : [ebp-0x3E]
        mov esi, dword ptr ss : [ebp-0x3A]
        mov eax, dword ptr ss : [ebp-0x36]
        add esp, 0xC
        jmp public_6efb0de
        public_6efb129 : nop
        xor edx, edx
        xor eax, eax
        xor esi, esi
        xor ebx, ebx
        jmp public_6efb0de
        public_6efb133 : nop
        xor edx, edx
        xor eax, eax
        xor esi, esi
        xor ebx, ebx
        mov dword ptr ss : [ebp-0x14], 4
        jmp public_6efb159
        public_6efb144 : nop
        cmp dword ptr ss : [ebp-0x30], 0
        je public_6efb159
        xor edx, edx
        xor eax, eax
        xor esi, esi
        xor ebx, ebx
        mov dword ptr ss : [ebp-0x14], 1
        public_6efb159 : nop
        mov ecx, dword ptr ss : [ebp+8]
        or eax, dword ptr ss : [ebp-0x28]
        pop edi
        mov dword ptr ds : [ecx+6], esi
        mov dword ptr ds : [ecx+2], ebx
        mov word ptr ds : [ecx+0xA], ax
        mov eax, dword ptr ss : [ebp-0x14]
        pop esi
        mov word ptr ds : [ecx], dx
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6efacd3)
        ASM_EXPORT_ENTRY_FIRST(0x6efad3d, public_6efad3d)
        ASM_EXPORT_ENTRY(0x6efad8c, public_6efad8c)
        ASM_EXPORT_ENTRY(0x6efade3, public_6efade3)
        ASM_EXPORT_ENTRY(0x6efae0d, public_6efae0d)
        ASM_EXPORT_ENTRY(0x6efae68, public_6efae68)
        ASM_EXPORT_ENTRY(0x6efaedf, public_6efaedf)
        ASM_EXPORT_ENTRY(0x6efaf15, public_6efaf15)
        ASM_EXPORT_ENTRY(0x6efaf3e, public_6efaf3e)
        ASM_EXPORT_ENTRY(0x6efaf5f, public_6efaf5f)
        ASM_EXPORT_ENTRY(0x6efaf79, public_6efaf79)
        ASM_EXPORT_ENTRY(0x6efafad, public_6efafad)
        ASM_EXPORT_ENTRY_LAST(0x6efafc3, public_6efafc3)
    }
}

#undef public_6efad0e
#undef public_6efad24
#undef public_6efad27
#undef public_6efad2a
#undef public_6efad3d
#undef public_6efad47
#undef public_6efad4e
#undef public_6efad56
#undef public_6efad5d
#undef public_6efad77
#undef public_6efad83
#undef public_6efad8c
#undef public_6efad99
#undef public_6efadb4
#undef public_6efadd4
#undef public_6efaddb
#undef public_6efade3
#undef public_6efadf1
#undef public_6efae06
#undef public_6efae0d
#undef public_6efae10
#undef public_6efae29
#undef public_6efae37
#undef public_6efae51
#undef public_6efae54
#undef public_6efae59
#undef public_6efae61
#undef public_6efae68
#undef public_6efae74
#undef public_6efae81
#undef public_6efae9a
#undef public_6efaea8
#undef public_6efaec3
#undef public_6efaec8
#undef public_6efaedf
#undef public_6efaefb
#undef public_6efaf09
#undef public_6efaf15
#undef public_6efaf25
#undef public_6efaf3a
#undef public_6efaf3e
#undef public_6efaf41
#undef public_6efaf4b
#undef public_6efaf5f
#undef public_6efaf69
#undef public_6efaf6b
#undef public_6efaf6c
#undef public_6efaf72
#undef public_6efaf79
#undef public_6efaf95
#undef public_6efafa1
#undef public_6efafa3
#undef public_6efafa9
#undef public_6efafad
#undef public_6efafbb
#undef public_6efafc3
#undef public_6efafcc
#undef public_6efafe4
#undef public_6efaff3
#undef public_6efb00e
#undef public_6efb013
#undef public_6efb016
#undef public_6efb02e
#undef public_6efb03d
#undef public_6efb046
#undef public_6efb049
#undef public_6efb04b
#undef public_6efb06b
#undef public_6efb077
#undef public_6efb07a
#undef public_6efb084
#undef public_6efb092
#undef public_6efb0b1
#undef public_6efb0bc
#undef public_6efb0c4
#undef public_6efb0d2
#undef public_6efb0de
#undef public_6efb0fb
#undef public_6efb10b
#undef public_6efb129
#undef public_6efb133
#undef public_6efb144
#undef public_6efb159

#pragma init_seg(compiler)
extern "C" void const* const public_6efad3d = __AsmFindLabelExport(&internal_6efacd3, 0x6efad3d);
extern "C" void const* const public_6efad8c = __AsmFindLabelExport(&internal_6efacd3, 0x6efad8c);
extern "C" void const* const public_6efade3 = __AsmFindLabelExport(&internal_6efacd3, 0x6efade3);
extern "C" void const* const public_6efae0d = __AsmFindLabelExport(&internal_6efacd3, 0x6efae0d);
extern "C" void const* const public_6efae68 = __AsmFindLabelExport(&internal_6efacd3, 0x6efae68);
extern "C" void const* const public_6efaedf = __AsmFindLabelExport(&internal_6efacd3, 0x6efaedf);
extern "C" void const* const public_6efaf15 = __AsmFindLabelExport(&internal_6efacd3, 0x6efaf15);
extern "C" void const* const public_6efaf3e = __AsmFindLabelExport(&internal_6efacd3, 0x6efaf3e);
extern "C" void const* const public_6efaf5f = __AsmFindLabelExport(&internal_6efacd3, 0x6efaf5f);
extern "C" void const* const public_6efaf79 = __AsmFindLabelExport(&internal_6efacd3, 0x6efaf79);
extern "C" void const* const public_6efafad = __AsmFindLabelExport(&internal_6efacd3, 0x6efafad);
extern "C" void const* const public_6efafc3 = __AsmFindLabelExport(&internal_6efacd3, 0x6efafc3);
